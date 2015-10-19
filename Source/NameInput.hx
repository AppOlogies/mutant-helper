package;

import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;


class NameInput extends Sprite
{
	private var nameinputBG:Bitmap;
	
	public var nameField:TextField = new TextField();
	private var textFormat:TextFormat;
	

	public function new() 
	{
		super();
		
		
		textFormat = new TextFormat();
		textFormat.font = "assets/Nootype.otf";
		textFormat.size = 60;
		textFormat.color = 0x000000;
		
		
		nameinputBG = new Bitmap(Assets.getBitmapData("assets/nameClass_BG.png"));
		addChild(nameinputBG);
		
		nameField.defaultTextFormat = textFormat;
		nameField.autoSize = TextFieldAutoSize.LEFT;
		nameField.text = "Namn";
		nameField.width = 350;
		nameField.height = 70;
		nameField.x = 100;
		nameField.y = 65;
		nameField.selectable = true;
		nameField.type = TextFieldType.INPUT;
		nameField.maxChars = 10;
		addChild(nameField);
		
		
		
	}
	
}