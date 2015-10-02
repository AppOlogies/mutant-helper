package;


import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.Lib;


class Main extends Sprite {
	
	var BG:Bitmap;
	var canvas:CanvasOBJ;
	var bounds:Rectangle;
	var canLength:Float = 0;
	var offset:Float = 0;
	
	var stageWidth:Int = Lib.current.stage.stageWidth;
	var stageHeight:Int = Lib.current.stage.stageHeight;
	var scaledW:Float = 0;
	var scaledH:Float = 0;
	
	
	public function new () {
		
		super ();
		
		scaledW = stageWidth / 660;
		scaledH = stageHeight / 1000;

		
	
		bounds = new Rectangle(0, 0, 0, 0);
		
		BG = new Bitmap(Assets.getBitmapData("assets/bakgrund.png"));
		BG.width = stageWidth;
		BG.height = stageHeight;
		addChild(BG);
		
	
		canvas = new CanvasOBJ();
		canvas.scaleX = scaledW;
		canvas.scaleY = scaledH;
		addChild(canvas);
		
		canvas.addEventListener(MouseEvent.MOUSE_DOWN, dragSTART);
		canvas.addEventListener(MouseEvent.MOUSE_UP, dragEND);
		
	}
	
	
	private function dragSTART(e:MouseEvent)
	{
		canLength = canvas.canvasLength*scaledH;
		if (canLength > 200) offset = 520*scaledH; 
		else offset = 0;
		
		bounds = new Rectangle(0,-canLength+offset,0,canLength-offset);
		canvas.startDrag(false, bounds);
	}
	
	private function dragEND(e:MouseEvent)
	{
		
		canvas.stopDrag();
	}
	
	
}