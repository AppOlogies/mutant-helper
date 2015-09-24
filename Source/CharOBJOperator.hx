package;

/**
 * ...
 * @author Magnus Johansson
 */

import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;

class CharOBJOperator extends Sprite
{
	
	public var id:Int;
	var operatorSprite:Sprite;
	var operator:Bitmap;

	public function new(index) 
	{
		super();
		id = index;
		operatorSprite = new Sprite();
		if (index < 4) operator = new Bitmap(Assets.getBitmapData("assets/plus.png"));
		trace("object id: " + id);
		if (index > 3) operator = new Bitmap(Assets.getBitmapData("assets/minus.png"));
		addChild(operatorSprite);
		operatorSprite.addChild(operator);
	}
	
}