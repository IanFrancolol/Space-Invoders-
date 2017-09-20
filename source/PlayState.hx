
/*CONTROLES:
 * F5: pantalla completa.
 * ESC: achicar pantalla.
 * -> : moverse  hacia la derecha(creo)
 * <- : moverse hacia la izquierda(creo)
 * ESPACIO: disparar.
 * TAB:volver a menu.
 * ENTER: interactuar / resetear Juego
 * PD: si desea corregir algo hable con Theo Leyenda ¡NO CAMBIE NADA DEL CODIGO SEÑOR GAME DISANER!
 * SE GUARDO LA VERCION 2 DEL JUEGO
 */

package;

import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.math.FlxRandom;
import flixel.util.FlxSave;
import haxe.Timer;
class PlayState extends FlxState
{
	private var cuadrado:Personaje;
	private var enemiGrup:FlxTypedGroup<Enemigo>;
	private var enemiGrup2:FlxTypedGroup<Enemigo>;
	private var enemiGrup3:FlxTypedGroup<Enemigo>;
	private var enemiGrup4:FlxTypedGroup<Enemigo>;
	
	private var enemigo1:Enemigo;
	private var enemigo2:Enemigo;
	private var enemigo3:Enemigo;
	private var enemigo4:Enemigo;
	private var marcianitoLoko:Marcianitoloko;
	
	private var estructuraDefenciva1:Estructuras;
	private var estructuraDefenciva2:Estructuras;
	private var estructuraDefenciva3:Estructuras;
	private var estructuraDefenciva4:Estructuras;
	private var estructuraDefenciva5:Estructuras;

	private var posY:Int = 0;
	private var contador:Int = 0;
	private var aniadirY:Int = 20;
	private var cantElementos:Int = 0;
	private var velocidadEnemigo:Float = 5;
	private var texto:FlxText;
	private var textoScore:FlxText;
	private var textoHightScore:FlxText;
	private var tiempo:Int;
	private var frame:Int;
	private var elegirGrupo:FlxRandom;
	private var elegirEnemigo:FlxRandom;
	private var elegir:Int;
	private var puntaje:Int = 0;
	private var maximoPuntaje:Int = 0;
	private var tiempoOvni:Int; 
	private var elegirTiempoOvni:FlxRandom;
	private var puntajeBonus:FlxRandom;
	private var aumentoDeVelocidad:Float = 0;
	private var contadorCaidos:Int = 0;
	private var YouWin:FlxText;
	private var habilitador1:Bool;
	private var EntrarEnfor:Bool = true;
	private var VidasJugador:Int = 3;
	private var RevivirJugador:Int = 2000;
	private var cantGolpes:Int = 4;
	private var spriteVidas1:FlxSprite;
	private var spriteVidas2:FlxSprite;
	private var spriteVidas3:FlxSprite;
	private var estructuraGrup:FlxTypedGroup<Estructuras>;
	
	override public function create():Void
	{
		super.create();
		FlxG.mouse.visible = false;
		cuadrado = new Personaje(80, 144, AssetPaths.Player__png);
		cuadrado.scale.y = 0.5;
		add(cuadrado);
		
		enemiGrup = new FlxTypedGroup<Enemigo>();
		enemiGrup2 = new FlxTypedGroup<Enemigo>();
		enemiGrup3 = new FlxTypedGroup<Enemigo>();
		enemiGrup4 = new FlxTypedGroup<Enemigo>();
		
		estructuraGrup = new FlxTypedGroup<Estructuras>();
		
		spriteVidas1 = new FlxSprite(50,0,AssetPaths.Player__png);
		spriteVidas2 = new FlxSprite(60,0,AssetPaths.Player__png);
		spriteVidas3 = new FlxSprite(70,0,AssetPaths.Player__png);
		
		estructuraDefenciva1 = new Estructuras(0, 105, AssetPaths.estructuraDefensiva__png);
		estructuraDefenciva2 = new Estructuras(35, 105, AssetPaths.estructuraDefensiva__png);
		estructuraDefenciva3 = new Estructuras(70, 105, AssetPaths.estructuraDefensiva__png);
		estructuraDefenciva4 = new Estructuras(105, 105, AssetPaths.estructuraDefensiva__png);
		estructuraDefenciva5 = new Estructuras(140, 105, AssetPaths.estructuraDefensiva__png);
		
		spriteVidas1.scale.x = 0.4;
		spriteVidas1.scale.y = 0.4;
		spriteVidas1.y = 0;
		
		spriteVidas2.scale.x = 0.4;
		spriteVidas2.scale.y = 0.4;
		spriteVidas2.y = 0;
		
		spriteVidas3.scale.x = 0.4;
		spriteVidas3.scale.y = 0.4;
		spriteVidas3.y = 0;
		
		tiempo = 5;
		frame = 1000;
		elegirGrupo = new FlxRandom();
		elegirEnemigo = new FlxRandom();
		elegirTiempoOvni = new FlxRandom();
		puntajeBonus = new FlxRandom();
		marcianitoLoko = new Marcianitoloko(144, 15, AssetPaths.marcianito_Loko__png);
	    marcianitoLoko.visible = false;
		add(marcianitoLoko);
		tiempoOvni = 5000;
		elegir = 0;
		maximoPuntaje = Reg.highscore;
		texto = new FlxText(FlxG.width / 2-30, FlxG.height / 2-10, 0, "GAME OVER", 8);
		textoScore = new FlxText(1, 1, 0, "Score:" + puntaje, 8);
		textoHightScore = new FlxText(85, 1, 0, "HighScore:" + maximoPuntaje, 8);
		YouWin = new FlxText(FlxG.width / 2 - 20, FlxG.height / 2 - 10, 0, "YOU WIN", 8);
		
		for (i in 0...10)//cambiar para cantidad de marcianos 1
		{
			enemigo1 = new Enemigo((7*i)+7*i, 0, AssetPaths.enemigo1__png);
			enemiGrup.add(enemigo1);
			enemigo1.scale.x = 0.7;
			enemigo1.scale.y = 0.7;
			
			enemigo2 = new Enemigo((7*i)+7*i, 20, AssetPaths.enemigo2__png);
			enemiGrup2.add(enemigo2);
			enemigo2.scale.x = 0.7;
			enemigo2.scale.y = 0.7;
			
			enemigo3 = new Enemigo((7 * i) + 7 * i, 30, AssetPaths.enemigo3__png);
			enemiGrup3.add(enemigo3);
			enemigo3.scale.x = 0.7;
			enemigo3.scale.y = 0.7;
			
			enemigo4 = new Enemigo((7 * i) + 7 * i, 40, AssetPaths.enemigo4__png);
			enemiGrup4.add(enemigo4);
			enemigo4.scale.x = 0.7;
			enemigo4.scale.y = 0.7;
		}
		for (i in 0...10)//cambiar para cantidad de marcianos 2
		{
			enemiGrup.members[i].velocity.x = velocidadEnemigo;
			enemiGrup.members[i].y = posY+10;
			
			enemiGrup2.members[i].velocity.x = velocidadEnemigo;
			enemiGrup2.members[i].y = posY + 25;
			
			enemiGrup3.members[i].velocity.x = velocidadEnemigo;
			enemiGrup3.members[i].y = posY + 40;
			
			enemiGrup4.members[i].velocity.x = velocidadEnemigo;
			enemiGrup4.members[i].y = posY + 55;
		}
		add(enemiGrup);
		add(enemiGrup2);
		add(enemiGrup3);
		add(enemiGrup4);
		add(textoScore);
		add(textoHightScore);
		add(spriteVidas1);
		add(spriteVidas2);
		add(spriteVidas3);
		estructuraGrup.add(estructuraDefenciva1);
		estructuraGrup.add(estructuraDefenciva2);
		estructuraGrup.add(estructuraDefenciva3);
		estructuraGrup.add(estructuraDefenciva4);
		estructuraGrup.add(estructuraDefenciva5);
		add(estructuraGrup);
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		CheckEnemigosPantalla();
		
		if(VidasJugador<1)
		{
			cuadrado.GameOver();
			add(texto);
			if (FlxG.keys.pressed.ENTER)
			{
				FlxG.resetState();
				puntaje = 0;
			}
			if (Reg.highscore < puntaje)
			{
				Reg.highscore = puntaje;
			}
		}
		if (FlxG.keys.pressed.TAB)
		{
			FlxG.switchState(new MenuState());
		}	
		if (FlxG.keys.pressed.F5)
		{
			FlxG.fullscreen = true;
		}
		if (FlxG.keys.pressed.ESCAPE)
		{
			FlxG.fullscreen = false;
		}
		if (FlxG.keys.justPressed.ENTER)
		{
			FlxG.resetState();
		}
		if (contador == 10)
		{
			contador = 0;
		}
		if (frame == 0)
		{
			frame = 1000;
			tiempo = 0;
		}
		if (marcianitoLoko.x < 0)
		{
			marcianitoLoko.destroy();
			marcianitoLoko.visible = true;
		}
		if (tiempoOvni == 0 && marcianitoLoko.visible == true)
		{
			tiempoOvni = 7000;
			marcianitoLoko = new Marcianitoloko(134, 10, AssetPaths.marcianito_Loko__png);
			marcianitoLoko.velocity.x = -20;
			marcianitoLoko.visible = true;
			add(marcianitoLoko);
		}
		if (FlxG.overlap(cuadrado.retornaBala(),marcianitoLoko))
		{
			marcianitoLoko.destroy();
			textoScore.destroy();
			cuadrado.retornaBala().kill();
			puntaje = sumaPuntaje(puntaje, puntajeBonus.int(100, 250));
			textoScore = new FlxText(1, 1, 0, "Score:" + puntaje, 8);
			add(textoScore);
		}
		if (tiempo == 0)
		{
			switch(elegirGrupo.int(1, 4))
			{
				case 1:
					elegir = elegirEnemigo.int(0, 9);
					if (enemiGrup.members[elegir].visible == true)
					{
						enemiGrup.members[elegir].Atacar();
					}
					tiempo = 5;
				case 2:
					elegir = elegirEnemigo.int(0, 9);
					if (enemiGrup2.members[elegir].visible == true)
					{
						enemiGrup2.members[elegir].Atacar();
					}
					tiempo = 5;
				case 3:
					elegir = elegirEnemigo.int(0, 9);
					if (enemiGrup3.members[elegir].visible == true)
					{
						enemiGrup3.members[elegir].Atacar();
					}
					tiempo = 5;
				case 4:
					elegir = elegirEnemigo.int(0, 9);
					if (enemiGrup4.members[elegir].visible == true)
					{
						enemiGrup4.members[elegir].Atacar();
					}
					tiempo = 5;
			}
		}
		//CHEKEO SI LA BALA DEL JUGADOR COLICIONA CON LA ESTRUCTURA.
		for (i in estructuraGrup)//DE i in estructuraGrup -- Recorre el grupo y accede al objeto directamente
		{
			if (FlxG.overlap(i, cuadrado.retornaBala()))
			{
				i.destruyeEstruc();
				cuadrado.retornaBala().kill();
			}
			for ( j in enemiGrup4)
			{
				if (FlxG.overlap(i, j.retornaBalaEnemigo()))//i refiriendome al grupo de estructuraGrup y j refiriendome al grupo 
				//de enemiGrup4 y teniendo en cuenta que j es un enemiGrup puedo llamar a retornaBalaEnemigo().
				{
					j.retornaBalaEnemigo().kill();
					i.destruyeEstruc();
				}
			}
			for ( k in enemiGrup3)
			{
				if (FlxG.overlap(i, k.retornaBalaEnemigo()))
				{
					i.destruyeEstruc();
					k.retornaBalaEnemigo().kill();
				}
			}
			for ( l in enemiGrup2)
			{
				if (FlxG.overlap(i, l.retornaBalaEnemigo()))
				{
					i.destruyeEstruc();
					l.retornaBalaEnemigo().kill();
				}
			}
			for ( z in enemiGrup)
			{
				if (FlxG.overlap(i, z.retornaBalaEnemigo()))
				{
					i.destruyeEstruc();
					z.retornaBalaEnemigo().kill();
				}
			}
		}
		if (EntrarEnfor)
		{
			for (i in 0...10)//cambiar para cantidad de marcianos 3
			{
				if (FlxG.collide(enemiGrup4.members[i], cuadrado.retornaBala())&& enemiGrup4.members[i].visible == true)
				{
					textoScore.destroy();
					enemiGrup4.members[i].visible = false;
					enemiGrup4.members[i].kill();
					cuadrado.retornaBala().kill();
					puntaje = sumaPuntaje(puntaje, 10);
					textoScore = new FlxText(1, 1, 0, "Score:" + puntaje, 8);
					add(textoScore);
				}
				else if (FlxG.collide(enemiGrup3.members[i], cuadrado.retornaBala())&& enemiGrup3.members[i].visible == true)
				{
					textoScore.destroy();
					enemiGrup3.members[i].visible = false;
					enemiGrup3.members[i].kill();
					cuadrado.retornaBala().kill();
					puntaje = sumaPuntaje(puntaje, 20);
					textoScore = new FlxText(1, 1, 0, "Score:" + puntaje, 8);
					add(textoScore);
				}
				else if (FlxG.collide(enemiGrup2.members[i], cuadrado.retornaBala())&& enemiGrup2.members[i].visible == true)
				{
					textoScore.destroy();
					enemiGrup2.members[i].visible = false;
					enemiGrup2.members[i].kill();
					cuadrado.retornaBala().kill();
					puntaje = sumaPuntaje(puntaje, 40);
					textoScore = new FlxText(1, 1, 0, "Score:" + puntaje, 8);
					add(textoScore);
				}
				else if (FlxG.collide(enemiGrup.members[i], cuadrado.retornaBala())&& enemiGrup.members[i].visible == true)
				{
					textoScore.destroy();
					enemiGrup.members[i].visible = false;
					enemiGrup.members[i].kill();
					cuadrado.retornaBala().kill();
					puntaje = sumaPuntaje(puntaje,80);
					textoScore = new FlxText(1, 1, 0, "Score:" + puntaje, 8);
					add(textoScore);
				}
				if (FlxG.overlap(cuadrado, enemiGrup4.members[i])&& enemiGrup4.members[i].visible == true || enemiGrup4.members[i].y>cuadrado.y && enemiGrup4.members[i].alive)
				{
					cuadrado.GameOver();
					add(texto);
					VidasJugador = 0;
					spriteVidas1.destroy();
					spriteVidas2.destroy();
					spriteVidas3.destroy();
					if (Reg.highscore < puntaje)
					{
						Reg.highscore = puntaje;
					}
				}
				if (FlxG.overlap(cuadrado, enemiGrup3.members[i])&& enemiGrup3.members[i].visible == true || enemiGrup3.members[i].y>cuadrado.y && enemiGrup3.members[i].alive)
				{
					cuadrado.GameOver();
					add(texto);
					VidasJugador = 0;
					spriteVidas1.destroy();
					spriteVidas2.destroy();
					spriteVidas3.destroy();
					if (Reg.highscore < puntaje)
					{
						Reg.highscore = puntaje;
					}
				}
				if (FlxG.overlap(cuadrado, enemiGrup2.members[i])&& enemiGrup2.members[i].visible == true || enemiGrup2.members[i].y>cuadrado.y && enemiGrup2.members[i].alive)
				{
					cuadrado.GameOver();
					add(texto);
					VidasJugador = 0;
					spriteVidas1.destroy();
					spriteVidas2.destroy();
					spriteVidas3.destroy();
					if (Reg.highscore < puntaje)
					{
						Reg.highscore = puntaje;
					}
				}
				if (FlxG.overlap(cuadrado, enemiGrup.members[i])&& enemiGrup.members[i].visible == true || enemiGrup.members[i].y>cuadrado.y && enemiGrup.members[i].alive)
				{
					cuadrado.GameOver();
					add(texto);
					VidasJugador = 0;
					spriteVidas1.destroy();
					spriteVidas2.destroy();
					spriteVidas3.destroy();
					if (Reg.highscore < puntaje)
					{
						Reg.highscore = puntaje;
					}
				}
				if (FlxG.overlap(cuadrado, enemiGrup.members[i].retornaBalaEnemigo())&&enemiGrup.members[i].retornaBalaEnemigo().visible==true)
				{
					enemiGrup.members[i].retornaBalaEnemigo().visible = false;
					enemiGrup.members[i].retornaBalaEnemigo().destruyeBala();
					if (VidasJugador > 1)
					{
						cuadrado.reset(80, 144);
					}
					switch(VidasJugador)
					{
						case 3:spriteVidas1.destroy();
						case 2:spriteVidas2.destroy();
						case 1:spriteVidas3.destroy();
					}
					VidasJugador--;
				}
				if (FlxG.overlap(cuadrado, enemiGrup2.members[i].retornaBalaEnemigo())&&enemiGrup2.members[i].retornaBalaEnemigo().visible==true)
				{
					enemiGrup2.members[i].retornaBalaEnemigo().visible = false;
					enemiGrup2.members[i].retornaBalaEnemigo().destruyeBala();
					if (VidasJugador > 1)
					{
						cuadrado.reset(80, 144);
					}
					switch(VidasJugador)
					{
						case 3:spriteVidas1.destroy();
						case 2:spriteVidas2.destroy();
						case 1:spriteVidas3.destroy();
					}
					VidasJugador--;
					
				}
				if (FlxG.overlap(cuadrado, enemiGrup3.members[i].retornaBalaEnemigo())&&enemiGrup3.members[i].retornaBalaEnemigo().visible==true)
				{
					enemiGrup3.members[i].retornaBalaEnemigo().visible = false;
					enemiGrup3.members[i].retornaBalaEnemigo().destruyeBala();
					if (VidasJugador > 1)
					{
						cuadrado.reset(80, 144);
					}
					switch(VidasJugador)
					{
						case 3:spriteVidas1.destroy();
						case 2:spriteVidas2.destroy();
						case 1:spriteVidas3.destroy();
					}
					VidasJugador--;
					
				}
				if (FlxG.overlap(cuadrado, enemiGrup4.members[i].retornaBalaEnemigo())&&enemiGrup4.members[i].retornaBalaEnemigo().visible==true)
				{
					enemiGrup4.members[i].retornaBalaEnemigo().visible = false;
					enemiGrup4.members[i].retornaBalaEnemigo().destruyeBala();
					if (VidasJugador > 1)
					{
						cuadrado.reset(80, 144);
					}
					switch(VidasJugador)
					{
						case 3:spriteVidas1.destroy();
						case 2:spriteVidas2.destroy();
						case 1:spriteVidas3.destroy();
					}
					VidasJugador--;
				}
				if(FlxG.overlap(cuadrado.retornaBala(),enemiGrup.members[i].retornaBalaEnemigo())&& enemiGrup.members[i].retornaBalaEnemigo().visible==true && cuadrado.retornaBala().visible==true)
				{
					cuadrado.retornaBala().kill();
					enemiGrup.members[i].retornaBalaEnemigo().kill();
				}
				if(FlxG.overlap(cuadrado.retornaBala(),enemiGrup2.members[i].retornaBalaEnemigo())&& enemiGrup2.members[i].retornaBalaEnemigo().visible==true && cuadrado.retornaBala().visible==true)
				{
					cuadrado.retornaBala().kill();
					enemiGrup2.members[i].retornaBalaEnemigo().kill();
				}
				if(FlxG.overlap(cuadrado.retornaBala(),enemiGrup3.members[i].retornaBalaEnemigo())&& enemiGrup3.members[i].retornaBalaEnemigo().visible==true && cuadrado.retornaBala().visible==true)
				{
					cuadrado.retornaBala().kill();
					enemiGrup3.members[i].retornaBalaEnemigo().kill();
				}
				if(FlxG.overlap(cuadrado.retornaBala(),enemiGrup4.members[i].retornaBalaEnemigo())&& enemiGrup4.members[i].retornaBalaEnemigo().visible==true && cuadrado.retornaBala().visible==true)
				{
					cuadrado.retornaBala().kill();
					enemiGrup4.members[i].retornaBalaEnemigo().kill();
				}
				if (enemiGrup.members[i].x<=0||enemiGrup2.members[i].x<=0||enemiGrup3.members[i].x<=0||enemiGrup4.members[i].x<=0)
				{
					posY = aniadirY;
					aumentoDeVelocidad = aumentoDeVelocidad + 2.2;//cambia la velocidad a la que bajan los enemigos(se guardo)
					for (a in 0...enemiGrup.length)
					{
						enemiGrup.members[a].y = enemiGrup.members[a].y + 5;
						enemiGrup.members[a].velocity.x =  enemiGrup.members[a].aumentoVelocidad(velocidadEnemigo,aumentoDeVelocidad);
					}
					for (b in 0...enemiGrup2.length)
					{
						enemiGrup2.members[b].y = enemiGrup2.members[b].y + 5;
						enemiGrup2.members[b].velocity.x = enemiGrup2.members[b].aumentoVelocidad(velocidadEnemigo,aumentoDeVelocidad);
					}
					for (c in 0...enemiGrup3.length)
					{
						enemiGrup3.members[c].y = enemiGrup3.members[c].y + 5;
						enemiGrup3.members[c].velocity.x = enemiGrup3.members[c].aumentoVelocidad(velocidadEnemigo,aumentoDeVelocidad);
					}
					for (d in 0...enemiGrup4.length)
					{
						enemiGrup4.members[d].y = enemiGrup4.members[d].y + 5;
						enemiGrup4.members[d].velocity.x = enemiGrup4.members[d].aumentoVelocidad(velocidadEnemigo,aumentoDeVelocidad);
					}
				}
				else if (enemiGrup.members[i].x >= 144||enemiGrup2.members[i].x>=144||enemiGrup3.members[i].x>=144||enemiGrup4.members[i].x>=144)
				{
					aumentoDeVelocidad = aumentoDeVelocidad + 2.2;//cambia la velocidad a la que bajan los enemigos(se guardo)
					for (e in 0...enemiGrup.length)
					{
						enemiGrup.members[e].y = enemiGrup.members[e].y + 5;
						enemiGrup.members[e].velocity.x = enemiGrup.members[e].aumentoVelocidad(-velocidadEnemigo,aumentoDeVelocidad);
					}
					for (f in 0...enemiGrup2.length)
					{
						enemiGrup2.members[f].y = enemiGrup2.members[f].y + 5;
						enemiGrup2.members[f].velocity.x = enemiGrup.members[f].aumentoVelocidad(-velocidadEnemigo,aumentoDeVelocidad);
					}
					for (g in 0...enemiGrup3.length)
					{
						enemiGrup3.members[g].y = enemiGrup3.members[g].y + 5;
						enemiGrup3.members[g].velocity.x = enemiGrup.members[g].aumentoVelocidad(-velocidadEnemigo,aumentoDeVelocidad);
					}
					for (h in 0...enemiGrup4.length)
					{
						enemiGrup4.members[h].y = enemiGrup4.members[h].y + 5;
						enemiGrup4.members[h].velocity.x = enemiGrup.members[h].aumentoVelocidad(-velocidadEnemigo,aumentoDeVelocidad); 
					}
				}
				
				contador++;
				frame--;
				tiempoOvni--;
			}
		}
	}
	public function sumaPuntaje(punt:Int , suma:Int):Int
	{
		punt = punt + suma;
		return punt;
	}
	public function CheckEnemigosPantalla():Void
	{
		for (e in 0...enemiGrup.length)
		{
			if (enemiGrup.members[e].visible==false)
			{
				contadorCaidos = contadorCaidos +1;
				if (contadorCaidos == 40)//ContadorCaidos va a ser igual a la cantidad de enemigos en la pantalla en este caso hay 40 enemigos en pantalla
				{
					habilitador1 = true;
				}
				else
				{
					habilitador1 = false;
				}
			}
		}
		for (f in 0...enemiGrup2.length)
		{
			if (enemiGrup2.members[f].visible==false)
			{
				contadorCaidos = contadorCaidos + 1;
			    if (contadorCaidos == 40)//ContadorCaidos va a ser igual a la cantidad de enemigos en la pantalla en este caso hay 40 enemigos en pantalla
				{
					habilitador1 = true;
				}
				else
				{
					habilitador1 = false;
				}
			}
		}
		for (g in 0...enemiGrup3.length)
		{
			if (enemiGrup3.members[g].visible==false)
			{
				contadorCaidos = contadorCaidos +1;
				if (contadorCaidos == 40)//ContadorCaidos va a ser igual a la cantidad de enemigos en la pantalla en este caso hay 40 enemigos en pantalla
				{
					habilitador1 = true;
				}
				else
				{
					habilitador1 = false;
				}
			}
		}
		for (h in 0...enemiGrup4.length)
		{
			if (enemiGrup4.members[h].visible==false)
			{
				contadorCaidos = contadorCaidos + 1;
				if (contadorCaidos == 40)//ContadorCaidos va a ser igual a la cantidad de enemigos en la pantalla en este caso hay 40 enemigos en pantalla
				{
					habilitador1 = true;
				}
				else
				{
					habilitador1 = false;
				}
			}
		}
		if (habilitador1)
		{
			if (Reg.highscore < puntaje)
			{
				Reg.highscore = puntaje;
			}
			EntrarEnfor = false;
			cuadrado.GameOver();
			add(YouWin);
			if (FlxG.keys.pressed.ENTER)
			{
				FlxG.resetState();
			}
			if (FlxG.keys.pressed.TAB)
			{
				FlxG.resetGame();
			}
		}
		contadorCaidos = 0;
	}
}