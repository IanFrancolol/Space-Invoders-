package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author Theo leyenda
 */
class Bala extends FlxSprite 
{
	
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		visible = true;
	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		
		if (y < 0)
		{
			kill();
		}
		if (y > 144)
		{
			destroy();
		}
		
	}
	public function destruyeBala()
	{
		destroy();
	}
	
}