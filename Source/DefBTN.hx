package;

import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;


class DefBTN extends Sprite
{

	public var plusSprite:Sprite;
	public var randomSprite:Sprite;
	public var plusBTN:Bitmap;
	public var randBTN:Bitmap;
	
	public function new() 
	{
		super();
		plusSprite = new Sprite();
		plusBTN = new Bitmap(Assets.getBitmapData("assets/plusknapp.png"));
		addChild(plusSprite);
		plusSprite.addChild(plusBTN);
		
		randomSprite = new Sprite();
		randBTN = new Bitmap(Assets.getBitmapData("assets/slumpknapp.png"));
		randBTN.x = 200;
		addChild(randomSprite);
		randomSprite.addChild(randBTN);
		
		
	}
	
}