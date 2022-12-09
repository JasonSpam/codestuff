import pkg.*;
public class Car 
{
	public Rectangle base;
	public Ellipse wheelone;
	public Ellipse wheeltwo;
	public Rectangle window;
	public Rectangle box;
	public double newstep;
	public int up;
	public int down;
	public Text label;
	public Color randomcolor;
public Car(double x, double y)
{
	base = new Rectangle (x, y, 100, 50);
	wheelone = new Ellipse (x, y + 30, 30, 30);
	wheeltwo = new Ellipse (x + 70, y + 30, 30, 30);
	window = new Rectangle (x + 60, y + 10, 30, 20);
	box = new Rectangle (base.getX(), base.getY(), base.getWidth(), base.getHeight() + 10);
}
public Car(double x, double y, String name)
{
	base = new Rectangle (x, y, 100, 50);
	wheelone = new Ellipse (x, y + 30, 30, 30);
	wheeltwo = new Ellipse (x + 70, y + 30, 30, 30);
	window = new Rectangle (x + 60, y + 10, 30, 20);
	box = new Rectangle (x, y, base.getWidth(), base.getHeight() + 10);
	label = new Text (x + 15, y + 15, name);
	randomcolor=new Color(Canvas.rand(255), Canvas.rand(255), Canvas.rand(255));
}
public Car(String name){
	int x = -100 - Canvas.rand(1000);
	int y = 0;
	int ran = Canvas.rand(5);
	if(ran == 0) y = 60;
	if(ran == 1) y = 170;
	if(ran == 2) y = 280;
	if(ran == 3) y = 390;
	if(ran == 4) y = 500;
	base = new Rectangle (x, y, 100, 50);
	wheelone = new Ellipse (base.getX(), base.getY() + 30, 30, 30);
	wheeltwo = new Ellipse (base.getX() + 70, base.getY() + 30, 30, 30);
	window = new Rectangle (base.getX() + 60, base.getY() + 10, 30, 20);
	box = new Rectangle (base.getX(), base.getY(), base.getWidth(), base.getHeight() + 10);
	label = new Text (base.getX() + 15, base.getY() + 15, name);
	randomcolor=new Color(Canvas.rand(255), Canvas.rand(255), Canvas.rand(255));
}
public Rectangle getBoundBox()
{
	return box;
}
public void draw()
{
	base.setColor(Color.RED);
	base.fill();
	wheelone.setColor(Color.BLACK);
	wheelone.fill();
	wheeltwo.setColor(Color.BLACK);
	wheeltwo.fill();
	window.fill();
	label.draw();
	label.grow(10,10);
}
public void setStep(double x)
{
newstep = x;
}
public double getStep()
{
return newstep;
}
public void drive()
{
	base.translate(newstep, 0);
	wheelone.translate(newstep, 0);
	wheeltwo.translate(newstep, 0);
	window.translate(newstep, 0);
	box.translate(newstep, 0);
	label.translate(newstep, 0);
	if(base.getX() >= 650) {
	base.translate(-750, 0);
	wheelone.translate(-750, 0);
	wheeltwo.translate(-750, 0);
	window.translate(-750, 0);
	box.translate(-750, 0);	
	label.translate(-750,0);
	}
}
public void drawRandom()
{
	
	base.setColor(randomcolor);
	base.fill();
	wheelone.setColor(Color.BLACK);
	wheelone.fill();
	wheeltwo.setColor(Color.BLACK);
	wheeltwo.fill();
	window.fill();
	box.draw();
	label.draw();
	label.grow(10,10);
}
public void driveRandom()
{
	base.translate(newstep, 0);
	wheelone.translate(newstep, 0);
	wheeltwo.translate(newstep, 0);
	window.translate(newstep, 0);
	box.translate(newstep, 0);
	label.translate(newstep, 0);
	if(base.getX() >=625 && base.getY() == -50)
	{
	base.translate(-750, 110);
	wheelone.translate(-750, 110);
	wheeltwo.translate(-750, 110);
	window.translate(-750, 110);
	box.translate(-750, 110);	
	label.translate(-750, 110);
	}
	if(base.getX() >=625 && base.getY() == 610)
	{
	base.translate(-750, -110);
	wheelone.translate(-750, -110);
	wheeltwo.translate(-750, -110);
	window.translate(-750, -110);
	box.translate(-750, -110);	
	label.translate(-750, -110);
	}
	if((base.getX() >= 625 && base.getY() == 60) || (base.getX() >= 625 && base.getY() == 170) || (base.getX() >= 625 && base.getY() == 280) || (base.getX() >= 625 && base.getY() == 390) || (base.getX() >= 625 && base.getY() == 500) ) {
	int rand = Canvas.rand(2);
	if(rand==0) {
	base.translate(-750, -110);
	wheelone.translate(-750, -110);
	wheeltwo.translate(-750, -110);
	window.translate(-750, -110);
	box.translate(-750, -110);	
	label.translate(-750, -110);
	}
	if(rand==1) {
	base.translate(-750, 110);
	wheelone.translate(-750, 110);
	wheeltwo.translate(-750, 110);
	window.translate(-750, 110);
	box.translate(-750, 110);	
	label.translate(-750,110);
	}
	}
}

public void translate(double x, double y)
{
	base.translate(x, y);
	wheelone.translate(x, y);
	wheeltwo.translate(x, y);
	window.translate(x, y);
	box.translate(x, y);
	label.translate(x, y);
}
public double getX()
{
return base.getX();
}
public double getY()
{
return base.getY();
}
public double getWidth()
{
return base.getWidth();
}
public double getHeight()
{
return base.getHeight() + 10;
}
}