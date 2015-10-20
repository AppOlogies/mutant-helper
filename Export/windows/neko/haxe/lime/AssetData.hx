package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/bakgrund.png", "assets/bakgrund.png");
			type.set ("assets/bakgrund.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/close_btn.png", "assets/close_btn.png");
			type.set ("assets/close_btn.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/forvirring.png", "assets/forvirring.png");
			type.set ("assets/forvirring.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/minus.png", "assets/minus.png");
			type.set ("assets/minus.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/namebg.png", "assets/namebg.png");
			type.set ("assets/namebg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/nameClass_BG.png", "assets/nameClass_BG.png");
			type.set ("assets/nameClass_BG.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Nootype.otf", "assets/Nootype.otf");
			type.set ("assets/Nootype.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/plus.png", "assets/plus.png");
			type.set ("assets/plus.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/plusknapp.png", "assets/plusknapp.png");
			type.set ("assets/plusknapp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/ram.png", "assets/ram.png");
			type.set ("assets/ram.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/skada.png", "assets/skada.png");
			type.set ("assets/skada.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/slumpknapp.png", "assets/slumpknapp.png");
			type.set ("assets/slumpknapp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/stress.png", "assets/stress.png");
			type.set ("assets/stress.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/tvivel.png", "assets/tvivel.png");
			type.set ("assets/tvivel.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
