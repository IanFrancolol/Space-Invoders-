package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author Theo leyenda
 */
class Enemigo extends FlxSprite 
{
	private var argumentoENT:Int;
	private var velocidadEne:Int;
	public var balaEnemigo:Bala;
	private var enemigoAtaca:Bool = false;
	public function new(?X:Float=0, ?Y:Float=0, ?SimpleGraphic:FlxGraphicAsset) 
	{
		super(X, Y, SimpleGraphic);
		frenoDeCaida(argumentoENT);
		ChekDestrucion();
	}
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		visible = true;
		if (enemigoAtaca)
		{
			FlxG.sound.play(AssetPaths.opcion3DisparoJugador__wav);
			FlxG.state.add(balaEnemigo);
			enemigoAtaca = false;
		}
	}
	public function aumentoVelocidad(Vel:Float,suma:Float):Float
	{
		if (Vel > 0)
		{
			Vel = Vel +suma;
		}
		else
		{
			Vel = Vel -suma;
		}
		return Vel;

	}
	public function frenoDeCaida(vel:Int):Int
	{
		vel = 0;
		return vel;
	}
	public function Atacar():Void
	{
		enemigoAtaca = true;
		balaEnemigo = new Bala(x + 5, y + 5, AssetPaths.BalaEnemigo__png);
		balaEnemigo.visible = true;
		balaEnemigo.velocity.y = 25;
	}
	public function retornaBalaEnemigo():Bala
	{
		return balaEnemigo;
	}
	public function ChekDestrucion():Void
	{
		if (y > 160)
		{
			destroy();
			
		}
	}
}