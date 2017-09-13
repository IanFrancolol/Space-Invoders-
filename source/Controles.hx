/*CONTROLES:
 * F5: pantalla completa.
 * ESC: achicar pantalla.
 * -> : moverse  hacia la derecha(creo)
 * <- : moverse hacia la izquierda(creo)
 * ESPACIO: disparar.
 * TAB:ir a pantalla anterior.
 * ENTER: interactuar / resetear Juego
 * PD: si desea corregir algo hable con Theo Leyenda ¡NO CAMBIE NADA DEL CODIGO SEÑOR GAME DISANER!
 * SE GUARDO LA VERCION 2 DEL JUEGO
 */

package;

import flixel.FlxState;
import flixel.text.FlxText;
import flixel.FlxG;

/**
 * ...
 * @author ...
 */
class Controles extends FlxState 
{
	private var CONTROLS:FlxText;
	private var F5:FlxText;
	private var ESC:FlxText;
	private var DER:FlxText;
	private var IZQ:FlxText;
	private var TAB:FlxText;
	private var ENTER:FlxText;
	override public function create():Void 
	{	
		super.create();
		CONTROLS = new FlxText(FlxG.width / 2 - 30, 5, 0, "CONTROLES", 8);
		F5 = new FlxText(0, 25, 0, "F5: Maximizar pantalla",8);
		ESC = new FlxText(0, 41, 0, "ESC: Minimizar pantalla",8);
		DER = new FlxText(0, 57, 0, "-> : Moverse hacia la derecha",8);
		IZQ = new FlxText(0, 73, 0, "<- : Moverse hacia la izquierda",8);
		TAB = new FlxText(0, 89, 0, "TAB : Ir a pantalla anterior",8);
		ENTER = new FlxText(0,105, 0, "ENTER : Reiniciar la partida",8);
		add(CONTROLS);
		add(F5);
		add(ESC);
		add(DER);
		add(IZQ);
		add(TAB);
		add(ENTER);
	}

	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		if (FlxG.keys.justPressed.TAB)
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