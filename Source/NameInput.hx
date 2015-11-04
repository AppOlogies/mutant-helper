package;

import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.text.Font;



class NameInput extends Sprite
{
	private var nameinputBG:Bitmap;


	public var nameField2:TextField = new TextField();
	private var textFormat:TextFormat;
	
	public static var myFont:Font = Assets.getFont("assets/Nootype.otf");

	

	public function new(namestring) 
	{
		super();
		

		
		textFormat = new TextFormat(myFont.fontName);
		//textFormat.font = "assets/Nootype.otf";
		textFormat.size = 60;
		textFormat.color = 0x000000;
		
		
		nameinputBG = new Bitmap(Assets.getBitmapData("assets/nameClass_BG.png"));
		addChild(nameinputBG);
		
		nameField2.defaultTextFormat = textFormat;
		nameField2.autoSize = TextFieldAutoSize.LEFT;
		nameField2.text = namestring;
		nameField2.width = 350;
		nameField2.height = 70;
		nameField2.x = 70;
		nameField2.y = 65;
		nameField2.selectable = true;
		nameField2.type = TextFieldType.INPUT;
		nameField2.maxChars = 7;
		nameField2.addEventListener(Event.ADDED, added);
		nameField2.addEventListener(MouseEvent.CLICK, textclick);
		//nameField2.needsSoftKeyboard = true;
		nameField2.requestSoftKeyboard;
		addChild(nameField2);
		

		
	}
	

	
	
	function added(e:Event):Void
	{
	
		if (nameField2.text == "Namn")
		{
			nameField2.text = "          ";
		}
		
	}
	
	
	function textclick(e:MouseEvent):Void
	{
		if (nameField2.text == "          ")
		{
			nameField2.text = "";
		}
		
	}

	
}