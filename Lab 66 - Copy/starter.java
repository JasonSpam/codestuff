import pkg.*;
import java.util.ArrayList;

public class starter implements InputControl, InputKeyControl {
	static Car[] bob = new Car[100];
	static int i = 0;
	public static void makeRoads(){
	int g = 10;
	i = 0;
	Rectangle road = new Rectangle(0,0,1000,1000);
	Color roadcolor = new Color(128, 128, 128);
	road.setColor(roadcolor);
	road.fill();
	Rectangle[] grass = new Rectangle[1000];
	Line[] lines = new Line[6];
	for(i = 0; i < grass.length; i++){
	grass[i] = new Rectangle(0, g, 1100, 30);
	grass[i].setColor(Color.YELLOW);
	grass[i].fill();
	g = g + 110;
	}
	g = 10;
	for(i = 0; i < lines.length; i++){
	lines[i] = new Line (0, g, 1100, g);
	lines[i].draw();
	g = g + 110;
	}
	}
	public static void main(String args[]) {
		// please leave following line alone, necessary for keyboard/mouse input
		KeyController kC = new KeyController(Canvas.getInstance(),new starter());
		MouseController mC = new MouseController(Canvas.getInstance(),new starter());
	makeRoads();
	for(i = 0; i < bob.length; i++){
	bob[i] = new Car("" + i);
	bob[i].drawRandom();
	bob[i].setStep(50);
	}
	while(true){
		for(i = 0; i < bob.length; i++){
		bob[i].driveRandom();
		}
		if(i == bob.length){
			i = 0;
	}
	}
	}

	public void onMouseClick(double x, double y) {
		// enter code here

	}

	public void keyPress(String s) {
		if(s.equals("p")){
		for(i = 0; i < bob.length; i++){
		bob[i].setStep(0);
	}
	}
		if(s.equals("g")){
		for(i = 0; i < bob.length; i++){
		bob[i].setStep(50);
	}
	}
	}
}
