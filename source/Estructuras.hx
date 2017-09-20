package;

import flash.events.MouseEvent;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author ...
 */
class Estructuras extends FlxSprite 
{
	public var vida:Int;
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, AssetPaths.estructuraDefensiva__png);
	}

	public function create():Void 
	{
		ModifEstruc();
		ModifEstruc2();
		Cambiosprite1();
		RetornaVida();
		vida = 0;
		volveAceroFlaco();
	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
	}
	public function ModifEstruc():Void
	{
		
		scale.x = 0.75;
		scale.y = 0.75;
	}
	public function ModifEstruc2():Void
	{
		scale.x = 0.50;
		scale.y = 0.50;
	}
	public function Cambiosprite1():Void 
	{
		vida++;
	}
	public function volveAceroFlaco():Void
	{
		vida = 0;
	}
	public function RetornaVida():Int
	{
		return vida;
	}
	public function destruyeEstruc():Void
	{
		destroy();
	}
	
}	
	