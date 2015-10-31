/**
 * ...
 * @author Magnus Johansson
 */
package;

import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;

// creates a new Character Object. Uses CharOBJOperator Class to add buttons.
class CharOBJ extends Sprite
{
	var ram:Bitmap;
	var plus:CharOBJOperator;
	var minus:CharOBJOperator;
	var plusXcord:Int = 0;
	var minusXcord:Int = 0;
	var i:Int;
	var plusArray:Array<CharOBJOperator>;
	var minusArray:Array<CharOBJOperator>;
	var styrka:Int = 0;
	var kyla:Int = 0;
	var skarpa:Int = 0;
	var kansla:Int = 0;
	
	var styrkaField:TextField = new TextField();
	var kylaField:TextField = new TextField();
	var skarpaField:TextField = new TextField();
	var kanslaField:TextField = new TextField();
	var nameField:TextField = new TextField();
	//var brutenField:TextField = new TextField();
	
	var plusBTN:CharOBJOperator;
	var minusBTN:CharOBJOperator;
	var textFormat:TextFormat;
	//var brutenFormat:TextFormat;
	var skadaBTN:Sprite;
	var stressBTN:Sprite;
	var forvirringBTN:Sprite;
	var tvivelBTN:Sprite;
	
	var namnBG:Sprite;
	var namnBGimg:Bitmap;
	
	var textButton:Sprite = new Sprite();
	
	public var gubbIndex:Int;
	public var closeBTN:Sprite;
	var closeBitmap:Bitmap;
	
	public function new(index) 
	{
		super();
		textFormat = new TextFormat();
		textFormat.font = "assets/Nootype.otf";
		//textFormat.align = "center";
		textFormat.size = 60;
		textFormat.color = 0x12fe16;
		
		gubbIndex = index;
		
		ram = new Bitmap(Assets.getBitmapData("assets/ram.png"));
		addChild(ram);
		
		closeBTN = new Sprite();
		addChild(closeBTN);
		closeBitmap = new Bitmap(Assets.getBitmapData("assets/close_btn.png"));
		closeBitmap.x = 600;
		closeBitmap.y = 15;
		closeBTN.addChild(closeBitmap);
		
		closeBTN.addEventListener(MouseEvent.CLICK, removeME);
		
		
		plusArray = new Array<CharOBJOperator>();
		minusArray = new Array<CharOBJOperator>();
		
		styrkaField.defaultTextFormat = textFormat;
		styrkaField.x = 70;
		styrkaField.y = 170;			
		styrkaField.text = "" + styrka;
		styrkaField.selectable = false;
		addChild(styrkaField);
		
		kylaField.defaultTextFormat = textFormat;
		kylaField.x = 230;
		kylaField.y = 170;
		kylaField.text = "" + kyla;
		kylaField.selectable = false;
		addChild(kylaField);
		
		skarpaField.defaultTextFormat = textFormat;
		skarpaField.x = 380;
		skarpaField.y = 170;
		skarpaField.text = "" + skarpa;	
		skarpaField.selectable = false;
		addChild(skarpaField);
		
		kanslaField.defaultTextFormat = textFormat;
		kanslaField.x = 530;
		kanslaField.y = 170;
		kanslaField.text = "" + kansla;
		kanslaField.selectable = false;
		addChild(kanslaField);
		
		namnBG = new Sprite();
		namnBGimg = new Bitmap(Assets.getBitmapData("assets/namnruta.png"));
		namnBG.addChild(namnBGimg);
		namnBG.x = 110;
		namnBG.y = -60;
		addChild(namnBG);
		
		nameField.defaultTextFormat = textFormat;
		nameField.textColor = 0x12fe16;
		//nameField.autoSize = TextFieldAutoSize.CENTER;
		nameField.text = "Namn";
		nameField.width = 350;
		nameField.height = 70;
		nameField.x = 330 - nameField.width / 2;
		nameField.y = -30;
		nameField.selectable = true;
		nameField.type = TextFieldType.INPUT;
		addChild(nameField);
		
		
		for (i in 0...4)
		{
			plus = new CharOBJOperator(i);
			plus.x = plusXcord + 70;
			plusXcord += 155;
			plus.y = 100;
			plusArray.insert(i, plus);
			addChild(plus);
		}
		for (i in 0...4)
		{
			plusBTN = plusArray[i];
			plusBTN.addEventListener(MouseEvent.CLICK, changeValue);
		}
		var j:Int = 0;
		for (i in 4...8)
		{
			trace("creating minus object: " + i);
			minus = new CharOBJOperator(i);
			minus.x = minusXcord + 70;
			minusXcord += 155;
			minus.y = 250;
			trace ("adding minus to array: " + j);
			minusArray.insert(j, minus);
			trace("added");
			addChild(minus);
			j++;
			trace("reached end of function");
		}
		for (i in 0...4)
		{
			trace ("adding minus to array: " + i);
			minusBTN = minusArray[i];
			minusBTN.addEventListener(MouseEvent.CLICK, changeValue);
		}
		
			// SKADEKNAPPAR
			
			
	}
	
	public function changeValue(e:MouseEvent)
	{
		var id:Int = e.currentTarget.id;
		trace("button");
		trace(id);
		if (id == 0 && styrka < 10) 
			styrka++;
			styrkaField.text = "" + styrka;
		if (id == 1 && kyla < 10)
			kyla++;
			kylaField.text = "" + kyla;
		if (id == 2 && skarpa < 10) 
			skarpa++;
			skarpaField.text = "" + skarpa;
		if (id == 3 && kansla < 10)
			kansla++;
			kanslaField.text = "" + kansla;
		if (id == 4 && styrka > 0)
		{
			styrka--;
			styrkaField.text = "" + styrka;
			if (styrka == 0)
			{
				breakChar();
			}
		}
		if (id == 5 && kyla > 0)
		{
			kyla--;
			kylaField.text = "" + kyla;
			if (kyla == 0)
			{
				breakChar();
			}
		}
		if (id == 6 && skarpa > 0)
		{
			skarpa--;
			skarpaField.text = "" + skarpa;
			if (skarpa == 0)
			{
				breakChar();
			}
		}
		if (id == 7 && kansla > 0)
		{
			kansla--;
			kanslaField.text = "" + kansla;
			if (kansla == 0)
			{
				breakChar();
			}
		}
	}
	
	public function breakChar()
	{
		removeChild(styrkaField);
		removeChild(kylaField);
		removeChild(skarpaField);
		removeChild(kanslaField);
		textButton = getTextButton("BRUTEN!");
		addChild(textButton);
	}
	
	public function unbreakChar(e:MouseEvent)
	{
		trace("unbreaking");
		removeChild(textButton);
		addChild(styrkaField);
		addChild(kylaField);
		addChild(skarpaField);
		addChild(kanslaField);
		for (i in 0...4) addChild(minusArray[i]);	
	}
	
	function getTextButton(label:String):Sprite
	{
		var txt:TextField = new TextField();
		txt.defaultTextFormat = new TextFormat("assets/Nootype.otf",120,0xE31414);
		txt.text = label;
		txt.x = 65;
		txt.y = 150;
		txt.autoSize = TextFieldAutoSize.LEFT;
		var btn:Sprite = new Sprite();
		btn.mouseChildren = false;
		btn.addChild(txt);
		btn.buttonMode = true;
		btn.addEventListener(MouseEvent.CLICK, unbreakChar);
		return btn;
	}
	
	
	function removeME(e:MouseEvent):Void
	{
		this.parent.removeChild(this);
		
	}
	
	
}