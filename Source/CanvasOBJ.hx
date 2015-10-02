package;

import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.Lib;


class CanvasOBJ extends Sprite
{
	var defBTN:DefBTN;
	var char:CharOBJ;
	var tempchar:CharOBJ;
	var gubbArray:Array<CharOBJ>;
	var gubbIndex:Int = 0;
	var i:Int = 0;
	var n:Int = 0;
	var gubbPos:Int = 0;
	public var canvasLength:Int = 0;
	
	
	
	
	public function new() 
	{
		super();
		
		defBTN = new DefBTN();
		defBTN.plusSprite.addEventListener(MouseEvent.CLICK, nyGubbe);
		defBTN.randomSprite.addEventListener(MouseEvent.CLICK, random);
		gubbArray = new Array<CharOBJ>();
		addChild(defBTN);
	}
	
	private function nyGubbe(e:MouseEvent)
	{
		char = new CharOBJ(gubbIndex);
		gubbArray.push(char);
		addChild(char);
		gubbIndex++;
		
		gubbPosition();
		
		char.addEventListener(Event.REMOVED, removeGubbe);
	}
	private function gubbPosition()
	{
		gubbPos =35; 
		n = 0;
		
		for (i in gubbArray)
		{
			tempchar = gubbArray[n];
			tempchar.y = gubbPos;
			gubbPos += 520;
			defBTN.y = gubbPos + 20;
			tempchar.gubbIndex = n;
			n++;
		}
		
		if (gubbArray.length == 0)
		{
			defBTN.y = 0;
		}
		
		canvasLength = gubbPos;
	}
	
	
	private function removeGubbe(e:Event)
	{
		gubbArray.remove(e.target);
		gubbPosition();
	}
	
	private function random(e:MouseEvent)
	{
		trace("Random pressed");
	}
	
}