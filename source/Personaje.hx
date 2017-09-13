package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.system.FlxAssets.FlxGraphicAsset;
/**
 * ...
 * @author Theo leyenda
 */
class Personaje extends FlxSprite 
{
	private var bala:Bala;
	private var checkDisparo:Bool = false;
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		bala = new Bala(x + 4, y - 6, AssetPaths.bala__png);
		bala.scale.x = 0.7;
		FlxG.state.add(bala);
		bala.kill();
	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		movimiento();
		checkLimite();
		Disparar();
		retornaBala();
		
	} 
	private function movimiento():Void
	{
		if (FlxG.keys.pressed.RIGHT)
		{
			x = x +2;
		}
		if (FlxG.keys.pressed.LEFT)
		{
			x = x - 2;
		}
	}
	public function checkLimite():Void
	{
		if (x < 0)
		{
			x = 0;
		}
		else if (x > FlxG.width - width)
		{
			x = FlxG.width - width;
		}
		if (y < 0)
		{
			y = 0;
		}
		else if (y > FlxG.height - height)
		{
			y = FlxG.height - height;
		}
	}
	public function retornaBala():Bala
	{
		return bala;
	}
	
	public function Disparar():Void
	{
		if(!bala.alive && FlxG.keys.justPressed.SPACE)
		{
			//CAMBIAR SONIDO DE DISPARO
			FlxG.sound.play(AssetPaths.Laser_Shoot2__wav);
			//FlxG.sound.play(AssetPaths.opcion1DisparoJugador__wav);
			//FlxG.sound.play(AssetPaths.opcion2DisparoJugador__wav);(8)
			//FlxG.sound.play(AssetPaths.opcion3DisparoJugador__wav);
			bala.reset(x + 6, y - 0);
			bala.velocity.y = -150;
		}
	}
	public function GameOver():Void
	{
		destroy();
	}
}