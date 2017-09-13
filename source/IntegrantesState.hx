package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;

/**
 * ...
 * @author ...
 */
class IntegrantesState extends FlxState 
{
	private var INTEGRANTES:FlxText;
	private var Y:FlxText;
	private var INTEGRANTES2:FlxText;
	private var PRECIONE_ENTER_PARA_CONTINUAR:FlxText;
	private var ENTER:FlxText;
	private var INTEGRANTES_DEL_GRUPO:FlxText;
	
	override public function create():Void 
	{
		super.create();
		INTEGRANTES_DEL_GRUPO = new FlxText(20, 5, 0, "INTEGRANTES DEL GRUPO", 8);
		INTEGRANTES = new FlxText(45, 36, 0, "LEYENDA THEO ", 8);
		//Y = new FlxText(70, 28, 0, "Y", 8);
		INTEGRANTES2 = new FlxText(40,20, 0, "LEGUIZAMON IAN ", 8);
		PRECIONE_ENTER_PARA_CONTINUAR = new FlxText(40, 80, 0, "PRECIONE ENTER", 8);
		ENTER = new FlxText(40, 88, 0, "PARA CONTINUAR", 8);
		add(INTEGRANTES_DEL_GRUPO);
		add(INTEGRANTES);
		//add(Y);
		add(INTEGRANTES2);
		add(PRECIONE_ENTER_PARA_CONTINUAR);
		add(ENTER);
	}
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.ENTER)
		{
			FlxG.switchState(new MenuState());
		}
		if (FlxG.keys.justPressed.F5)
		{
			FlxG.fullscreen = true;
		}
		if (FlxG.keys.justPressed.ESCAPE)
		{
			FlxG.fullscreen = false;
		}
		
	}
	
}