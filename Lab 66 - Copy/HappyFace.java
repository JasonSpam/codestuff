import pkg.*;
public class HappyFace {
	public Ellipse face;
	public Ellipse eye1;
	public Ellipse eye2;
	public Ellipse pupil1;
	public Ellipse pupil2;
	public Ellipse mouth;
	public HappyFace(double x, double y){
	face = new Ellipse(x, y, 75, 75);
	eye1 = new Ellipse(x + x/9, y + 20, 15, 15);
	eye2 = new Ellipse(x + 50, y + 20, 15, 15);
	pupil1 = new Ellipse(eye1.getX(), eye1.getY() + 2, 8, 8);
	pupil2 = new Ellipse(eye2.getX(), eye2.getY() + 2, 8, 8);
	mouth = new Ellipse(x + x/9, y + 50, 30, 10);
	}
	public void draw(){
	face.setColor(Color.YELLOW);
	face.fill();
	eye1.setColor(Color.WHITE);
	eye1.fill();
	eye2.setColor(Color.WHITE);
	eye2.fill();
	pupil1.fill();
	pupil2.fill();
	mouth.setColor(Color.RED);
	mouth.fill();
	}
	public int getX(){
	return face.getX();
	}
	public int getY(){
	return face.getY();
	}
	public int getWidth(){
	return face.getWidth();
	}
	public int getHeight(){
	return face.getHeight();
	}
	public void translate(int x, int y){
	face.translate(x, y);
	eye1.translate(x, y);
	eye2.translate(x, y);
	pupil1.translate(x, y);
	pupil2.translate(x, y);
	mouth.translate(x, y);
	}
	public boolean crash(Car c){
	boolean poole = true;
	Rectangle bruh = c.getBoundBox();
	if(!face.contains(bruh)){
	poole = false;
	}
	if(face.contains(bruh)){
	poole = true;
	}
	return poole;
	}
}