package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;

/**
 * ...
 * @author ...
 */
class MenuState extends FlxState 
{
	private var EMPEZAR:FlxText;
	private var VOLVER:FlxText;
	private var ENTER:FlxText;
	private var CONTROLES:FlxText;
	private var TITULOPART1:FlxText;
	private var TITULOPART2:FlxText;

	override public function create():Void 
	{
		super.create();
		FlxG.mouse.visible = false;
		TITULOPART1 = new FlxText(FlxG.width / 2 - 40, 5, 0, "TRUCHI INVADERS", 8);
		TITULOPART2 = new FlxText(FlxG.width / 2 - 50, 13, 0, "(clon space invaders)", 8);
		EMPEZAR = new FlxText(0 , 30, 0, "1.JUGAR",8);
		VOLVER = new FlxText(0, 50, 0, "2.VOLVER A VER LOS", 8);
		ENTER = new FlxText(0, 58, 0, "INTEGRANTES", 8);
		CONTROLES = new FlxText(0, 80, 0, "3.CONTROLES", 8);
		add(TITULOPART1);
		add(TITULOPART2);
		add(EMPEZAR);
		add(VOLVER);
		add(ENTER);
		add(CONTROLES);
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
		if (FlxG.keys.justPressed.ONE)
		{
			FlxG.switchState(new PlayState());
		}
		if (FlxG.keys.justPressed.TWO)
		{
			FlxG.switchState(new IntegrantesState());
		}
		if (FlxG.keys.justPressed.THREE)
		{
			FlxG.switchState(new Controles());
		}
		if (FlxG.keys.justPressed.TAB)
		{
			FlxG.switchState(new IntegrantesState());
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