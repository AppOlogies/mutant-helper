package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Font;
import lime.graphics.Image;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if (sys || nodejs)
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/bakgrund.png", __ASSET__assets_bakgrund_png);
		type.set ("assets/bakgrund.png", AssetType.IMAGE);
		className.set ("assets/close_btn.png", __ASSET__assets_close_btn_png);
		type.set ("assets/close_btn.png", AssetType.IMAGE);
		className.set ("assets/minus.png", __ASSET__assets_minus_png);
		type.set ("assets/minus.png", AssetType.IMAGE);
		className.set ("assets/namebg.png", __ASSET__assets_namebg_png);
		type.set ("assets/namebg.png", AssetType.IMAGE);
		className.set ("assets/nameClass_BG.png", __ASSET__assets_nameclass_bg_png);
		type.set ("assets/nameClass_BG.png", AssetType.IMAGE);
		className.set ("assets/Nootype.otf", __ASSET__assets_nootype_otf);
		type.set ("assets/Nootype.otf", AssetType.FONT);
		className.set ("assets/plus.png", __ASSET__assets_plus_png);
		type.set ("assets/plus.png", AssetType.IMAGE);
		className.set ("assets/plusknapp.png", __ASSET__assets_plusknapp_png);
		type.set ("assets/plusknapp.png", AssetType.IMAGE);
		className.set ("assets/ram.png", __ASSET__assets_ram_png);
		type.set ("assets/ram.png", AssetType.IMAGE);
		className.set ("assets/slumpknapp.png", __ASSET__assets_slumpknapp_png);
		type.set ("assets/slumpknapp.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/bakgrund.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/close_btn.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/minus.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/namebg.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/nameClass_BG.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Nootype.otf";
		className.set (id, __ASSET__assets_nootype_otf);
		
		type.set (id, AssetType.FONT);
		id = "assets/plus.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/plusknapp.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/ram.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/slumpknapp.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = ApplicationMain.config.assetsPrefix;
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if openfl
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__assets_nootype_otf);
		
		
		
		
		
		#end
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/bakgrund.png", __ASSET__assets_bakgrund_png);
		type.set ("assets/bakgrund.png", AssetType.IMAGE);
		
		className.set ("assets/close_btn.png", __ASSET__assets_close_btn_png);
		type.set ("assets/close_btn.png", AssetType.IMAGE);
		
		className.set ("assets/minus.png", __ASSET__assets_minus_png);
		type.set ("assets/minus.png", AssetType.IMAGE);
		
		className.set ("assets/namebg.png", __ASSET__assets_namebg_png);
		type.set ("assets/namebg.png", AssetType.IMAGE);
		
		className.set ("assets/nameClass_BG.png", __ASSET__assets_nameclass_bg_png);
		type.set ("assets/nameClass_BG.png", AssetType.IMAGE);
		
		className.set ("assets/Nootype.otf", __ASSET__assets_nootype_otf);
		type.set ("assets/Nootype.otf", AssetType.FONT);
		
		className.set ("assets/plus.png", __ASSET__assets_plus_png);
		type.set ("assets/plus.png", AssetType.IMAGE);
		
		className.set ("assets/plusknapp.png", __ASSET__assets_plusknapp_png);
		type.set ("assets/plusknapp.png", AssetType.IMAGE);
		
		className.set ("assets/ram.png", __ASSET__assets_ram_png);
		type.set ("assets/ram.png", AssetType.IMAGE);
		
		className.set ("assets/slumpknapp.png", __ASSET__assets_slumpknapp_png);
		type.set ("assets/slumpknapp.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && requestedType == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return AudioBuffer.fromFile (path.get (id));
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Dynamic /*Font*/ {
		
		// TODO: Complete Lime Font API
		
		#if openfl
		#if (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), openfl.text.Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			openfl.text.Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), openfl.text.Font);
			
		} else {
			
			return new openfl.text.Font (path.get (id));
			
		}
		
		#end
		#end
		
		return null;
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		return Image.fromFile (path.get (id));
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getAudioBuffer (id));
			
		//}
		
		#else
		
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if html5
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_bakgrund_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_close_btn_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_minus_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_namebg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nameclass_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_nootype_otf extends flash.text.Font { }
@:keep @:bind #if display private #end class __ASSET__assets_plus_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_plusknapp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_ram_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_slumpknapp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5

#if openfl





@:keep #if display private #end class __ASSET__assets_nootype_otf extends openfl.text.Font { public function new () { super (); fontName = "Radikal"; } } 





#end

#else

#if openfl
@:keep class __ASSET__assets_nootype_otf extends openfl.text.Font { public function new () { super (); __fontPath = "assets/Nootype.otf"; fontName = "Radikal"; }}

#end

#if (windows || mac || linux)


@:bitmap("Assets/bakgrund.png") class __ASSET__assets_bakgrund_png extends lime.graphics.Image {}
@:bitmap("Assets/close_btn.png") class __ASSET__assets_close_btn_png extends lime.graphics.Image {}
@:bitmap("Assets/minus.png") class __ASSET__assets_minus_png extends lime.graphics.Image {}
@:bitmap("Assets/namebg.png") class __ASSET__assets_namebg_png extends lime.graphics.Image {}
@:bitmap("Assets/nameClass_BG.png") class __ASSET__assets_nameclass_bg_png extends lime.graphics.Image {}
@:font("Assets/Nootype.otf") class __ASSET__assets_nootype_otf extends lime.graphics.Font {}
@:bitmap("Assets/plus.png") class __ASSET__assets_plus_png extends lime.graphics.Image {}
@:bitmap("Assets/plusknapp.png") class __ASSET__assets_plusknapp_png extends lime.graphics.Image {}
@:bitmap("Assets/ram.png") class __ASSET__assets_ram_png extends lime.graphics.Image {}
@:bitmap("Assets/slumpknapp.png") class __ASSET__assets_slumpknapp_png extends lime.graphics.Image {}



#end

#end
#end

