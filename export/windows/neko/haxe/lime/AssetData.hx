package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/bala.png", "assets/images/bala.png");
			type.set ("assets/images/bala.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/BalaEnemigo.png", "assets/images/BalaEnemigo.png");
			type.set ("assets/images/BalaEnemigo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemigo1.png", "assets/images/enemigo1.png");
			type.set ("assets/images/enemigo1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemigo2.png", "assets/images/enemigo2.png");
			type.set ("assets/images/enemigo2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemigo3.png", "assets/images/enemigo3.png");
			type.set ("assets/images/enemigo3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemigo4.png", "assets/images/enemigo4.png");
			type.set ("assets/images/enemigo4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/estructuraDefensiva.png", "assets/images/estructuraDefensiva.png");
			type.set ("assets/images/estructuraDefensiva.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/marcianito-Loko.png", "assets/images/marcianito-Loko.png");
			type.set ("assets/images/marcianito-Loko.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/Player.png", "assets/images/Player.png");
			type.set ("assets/images/Player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/explocionMarcianitoLoko.wav", "assets/sounds/explocionMarcianitoLoko.wav");
			type.set ("assets/sounds/explocionMarcianitoLoko.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Explosion.wav", "assets/sounds/Explosion.wav");
			type.set ("assets/sounds/Explosion.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/ExplosionJugador.wav", "assets/sounds/ExplosionJugador.wav");
			type.set ("assets/sounds/ExplosionJugador.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Laser_Shoot2.wav", "assets/sounds/Laser_Shoot2.wav");
			type.set ("assets/sounds/Laser_Shoot2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/oopcion2ExlocionEnemigo.wav", "assets/sounds/oopcion2ExlocionEnemigo.wav");
			type.set ("assets/sounds/oopcion2ExlocionEnemigo.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/opcion1DisparoJugador.wav", "assets/sounds/opcion1DisparoJugador.wav");
			type.set ("assets/sounds/opcion1DisparoJugador.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/opcion1ExplocionEnemigo.wav", "assets/sounds/opcion1ExplocionEnemigo.wav");
			type.set ("assets/sounds/opcion1ExplocionEnemigo.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/opcion2DisparoJugador.wav", "assets/sounds/opcion2DisparoJugador.wav");
			type.set ("assets/sounds/opcion2DisparoJugador.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/opcion3DisparoJugador.wav", "assets/sounds/opcion3DisparoJugador.wav");
			type.set ("assets/sounds/opcion3DisparoJugador.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/opcionDisparoEnemigo.wav", "assets/sounds/opcionDisparoEnemigo.wav");
			type.set ("assets/sounds/opcionDisparoEnemigo.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
