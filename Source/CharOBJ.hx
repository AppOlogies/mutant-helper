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
import openfl.events.TouchEvent;

// creates a new Character Object. Uses CharOBJOperator Class to add buttons.
class CharOBJ extends Sprite
{
	var ram:Bitmap;
	var nameBG:Bitmap;
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
	var nameString:String = "Namn";
	var nameinput:NameInput;
	var nameinputClose:Sprite;
	//var brutenField:TextField = new TextField();
	
	var plusBTN:CharOBJOperator;
	var minusBTN:CharOBJOperator;
	var textFormat:TextFormat;
	//var brutenFormat:TextFormat;
	var skadaBTN:Sprite;
	var skadaBTNimg:Bitmap;
	var stressBTN:Sprite;
	var stressBTNimg:Bitmap;
	var forvirringBTN:Sprite;
	var forvirringBTNimg:Bitmap;
	var tvivelBTN:Sprite;
	var tvivelBTNimg:Bitmap;
	
	var namnBG:Sprite;
	var namnBGimg:Bitmap;
	
	var textButton:Sprite = new Sprite();
	
	public var gubbIndex:Int;
	public var closeBTN:Sprite;
	var closeBitmap:Bitmap;
	var closeBitmap2:Bitmap;
	
	var skadaBTN:Sprite;
	var skadaBitmap:Bitmap;
	var stressBTN:Sprite;
	var stressBitmap:Bitmap;
	var forvirringBTN:Sprite;
	var forvirringBitmap:Bitmap;
	var tvivelBTN:Sprite;
	var tvivelBitmap:Bitmap;

	
	
	
	public function new(index, rand:Bool) 
	{
		super();
		
		if (rand)
		{
			styrka = Std.random(6);
			kyla = Std.random(6);
			skarpa = Std.random(6);
			kansla = Std.random(6);
			
			if (styrka == 0)
			{styrka = 1; }
			
			if (kyla == 0)
			{kyla = 1; }
			
			if (skarpa == 0)
			{skarpa = 1; }
			
			if (kansla == 0)
			{kansla = 1; }
		}
		
		
		textFormat = new TextFormat();
		textFormat.font = "assets/Nootype.otf";
<<<<<<< HEAD
=======
		//textFormat.align = "center";
>>>>>>> origin/master
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
<<<<<<< HEAD
		kylaField.text = "" + kyla;		
=======
		kylaField.text = "" + kyla;
>>>>>>> origin/master
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
<<<<<<< HEAD
		kanslaField.text = "" + kansla;		
		kanslaField.selectable = false;
		addChild(kanslaField);
		
		nameBG = new Bitmap(Assets.getBitmapData("assets/namebg.png"));
		nameBG.x = 330 - nameBG.width/2;
		nameBG.y = -30;
		nameBG.addEventListener(MouseEvent.DOUBLE_CLICK, nameinputfunction);
		addChild(nameBG);
		
		
		nameField.defaultTextFormat = textFormat;
		//nameField.textColor = 0x000000;
		nameField.autoSize = TextFieldAutoSize.LEFT;
		nameField.text = nameString;
		nameField.width = 350;
		nameField.height = 70;
		nameField.x = 210;
		nameField.y = -17;
		nameField.selectable = false;
		nameField.doubleClickEnabled = true;
		nameField.type = TextFieldType.DYNAMIC;
		nameField.maxChars = 10;
		nameField.addEventListener(MouseEvent.DOUBLE_CLICK, nameinputfunction);
=======
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
		nameField.maxChars = 10;
>>>>>>> origin/master
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
		
<<<<<<< HEAD
		
		//--------------------------------------------------------------------------
		
		skadaBTN = new Sprite();
		skadaBitmap = new Bitmap(Assets.getBitmapData("assets/skada.png"));
		skadaBTN.addChild(skadaBitmap);
		skadaBTN.x  = 20;
		skadaBTN.y  = 330;
		skadaBTN.doubleClickEnabled = true;
		skadaBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknapp);
		addChild(skadaBTN);
		
		stressBTN = new Sprite();
		stressBitmap = new Bitmap(Assets.getBitmapData("assets/stress.png"));
		stressBTN.addChild(stressBitmap);
		stressBTN.x  = 350;
		stressBTN.y  = 330;
		stressBTN.doubleClickEnabled = true;
		stressBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknapp);
		addChild(stressBTN);
		
		forvirringBTN = new Sprite();
		forvirringBitmap = new Bitmap(Assets.getBitmapData("assets/forvirring.png"));
		forvirringBTN.addChild(forvirringBitmap);
		forvirringBTN.x  = 20;
		forvirringBTN.y  = 395;
		forvirringBTN.doubleClickEnabled = true;
		forvirringBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknapp);
		addChild(forvirringBTN);
		
		tvivelBTN = new Sprite();
		tvivelBitmap = new Bitmap(Assets.getBitmapData("assets/tvivel.png"));
		tvivelBTN.addChild(tvivelBitmap);
		tvivelBTN.x  = 350;
		tvivelBTN.y  = 395;
		tvivelBTN.doubleClickEnabled = true;
		tvivelBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknapp);
		addChild(tvivelBTN);
		

		
		
		
		
		//----------------------------------------------------------------------------
		
		
		
		
	}
	
	
	public function skadeknapp(e:MouseEvent):Void
	{
		
		if (e.target == skadaBTN)
		{	styrka--;
			styrkaField.text = "" + styrka;
			if (styrka == 0 || styrka<0)
			{
				breakChar();
			} 
		}
		
		if (e.target == stressBTN)
		{	kyla--;
			kylaField.text = "" + kyla;
			if (kyla == 0 || kyla<0)
			{
				breakChar();
			} 
		}
		
		
		if (e.target == forvirringBTN)
		{	skarpa--;
			skarpaField.text = "" + skarpa;
			if (skarpa == 0 || skarpa<0)
			{
				breakChar();
			} 
		}
		
		
		if (e.target == tvivelBTN)
		{	kansla--;
			kanslaField.text = "" + kansla;
			if (kansla == 0 || kansla<0)
			{
				breakChar();
			} 
		}
=======
			// SKADEKNAPPAR
			skadaBTN = new Sprite();
			skadaBTNimg = new Bitmap(Assets.getBitmapData("assets/skada.png"));
			skadaBTN.addChild(skadaBTNimg);
			skadaBTN.x = 20;
			skadaBTN.y = 330;
			skadaBTN.doubleClickEnabled = true;
			skadaBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknappar);
			addChild(skadaBTN);
			
			forvirringBTN = new Sprite();
			forvirringBTNimg = new Bitmap(Assets.getBitmapData("assets/forvirring.png"));
			forvirringBTN.addChild(forvirringBTNimg);
			forvirringBTN.x = 360;
			forvirringBTN.y = 330;
			forvirringBTN.doubleClickEnabled = true;
			forvirringBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknappar);
			addChild(forvirringBTN);
			
			stressBTN = new Sprite();
			stressBTNimg = new Bitmap(Assets.getBitmapData("assets/stress.png"));
			stressBTN.addChild(stressBTNimg);
			stressBTN.x = 20;
			stressBTN.y = 395;
			stressBTN.doubleClickEnabled = true;
			stressBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknappar);
			addChild(stressBTN);
			
			tvivelBTN = new Sprite();
			tvivelBTNimg = new Bitmap(Assets.getBitmapData("assets/tvivel.png"));
			tvivelBTN.addChild(tvivelBTNimg);
			tvivelBTN.x = 360;
			tvivelBTN.y = 395;
			tvivelBTN.doubleClickEnabled = true;
			tvivelBTN.addEventListener(MouseEvent.DOUBLE_CLICK, skadeknappar);
			addChild(tvivelBTN);
			
			
	}
	
	public function skadeknappar(e:MouseEvent)
	{	
		if(e.target == skadaBTN)
		{styrka--; styrkaField.text = "" + styrka; 
			if (styrka < 1)
			{
				breakChar();
			}
		}
		if(e.target == forvirringBTN)
		{skarpa--; skarpaField.text = "" + skarpa; 
			if (skarpa < 1)
			{
				breakChar();
			}
		}
		if(e.target == stressBTN)
		{kyla--; kylaField.text = "" + kyla; 
			if (kyla < 1)
			{
				breakChar();
			}
		}
		if(e.target == tvivelBTN)
		{kansla--; kanslaField.text = "" + kansla; 
			if (kansla < 1)
			{
				breakChar();
			}
		}
				
>>>>>>> origin/master
		
	}
	
	
<<<<<<< HEAD
	
=======
>>>>>>> origin/master
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
	
	
	function nameinputfunction(e:MouseEvent):Void
	{
		
		nameinput = new NameInput(nameString);
		nameinput.x =  125;
		nameinput.y = -60;
		addChild(nameinput);
		
		nameinputClose = new Sprite();
		closeBitmap2 = new Bitmap(Assets.getBitmapData("assets/close_btn.png"));
		nameinputClose.addChild(closeBitmap2);
		nameinputClose.x = 445;
		nameinputClose.y = -20;
		addChild(nameinputClose);
		nameinputClose.addEventListener(MouseEvent.CLICK, getnamestring);
		
		
	}
	
	function getnamestring(e:MouseEvent):Void
	{
		
		nameString = nameinput.nameField2.text;
		
		
		if (nameString == "")
		{nameString = "Namn"; }
		
		if (nameString == "          ")
		{nameString = "Namn"; }
		
		
		nameField.text = nameString;
		
		removeChild(nameinputClose);
		removeChild(nameinput);
		
		
	}
	
	
}