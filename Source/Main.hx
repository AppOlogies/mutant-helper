package;


import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;


class Main extends Sprite {
	
	var BG:Bitmap;
	var canvas:CanvasOBJ;
	var bounds:Rectangle;
	var canLength:Int = 0;
	var offset:Int =0;
	
	
	
	public function new () {
		
		super ();
		
		bounds = new Rectangle(0, -2000, 0, 5000);
		
		BG = new Bitmap(Assets.getBitmapData("assets/bakgrund.png"));
		addChild(BG);
		
		canvas = new CanvasOBJ();
		addChild(canvas);
		
		canvas.addEventListener(MouseEvent.MOUSE_DOWN, dragSTART);
		canvas.addEventListener(MouseEvent.MOUSE_UP, dragEND);
		
	}
	
	
	private function dragSTART(e:MouseEvent)
	{
		canLength = canvas.canvasLength;
		if (canLength > 200) offset = 480; 
		else offset = 0;
		
		bounds = new Rectangle(0,-canLength+offset,0,canLength-offset);
		canvas.startDrag(false, bounds);
	}
	
	private function dragEND(e:MouseEvent)
	{
		
		canvas.stopDrag();
	}
	
	
}