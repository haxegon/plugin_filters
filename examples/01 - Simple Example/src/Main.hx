import haxegon.*;

class Main {	
	var currentfilter = "None";
	
	function update(){
		Gfx.drawimage(0, 0, "constellation");
		
		Text.align = Text.CENTER;
		Text.size = 2;
		Gfx.fillbox(0, 0, Gfx.screenwidth, 24, Col.BLACK, 0.7);
		Text.display(Gfx.screenwidthmid, 4, "FILTER EXAMPLE - PRESS 1 - 9 to change");
		Gfx.fillbox(0, Gfx.screenheight - 24, Gfx.screenwidth, 24, Col.BLACK, 0.7);
		Text.display(Gfx.screenwidthmid, Gfx.screenheight - 20, "Current Filter: " + currentfilter);
		
		if (Input.justpressed(Key.ONE)){
			Filter.reset();
			Filter.bloom = 1;
			currentfilter = "Bloom = 1.0";
		}else if (Input.justpressed(Key.TWO)){
			Filter.reset();
			Filter.bloom = 2;
			currentfilter = "Bloom = 2.0";
		}else if (Input.justpressed(Key.THREE)){
			Filter.reset();
			Filter.blur = 5;
			currentfilter = "Blur = 5.0";
		}else if (Input.justpressed(Key.FOUR)){
			Filter.reset();
			Filter.saturation = -1;
			currentfilter = "Saturation Adjust (Grayscale)";
		}else if (Input.justpressed(Key.FIVE)){
			Filter.reset();
			Filter.saturation = 1;
			currentfilter = "Saturation Adjust (Colourful)";
		}else if (Input.justpressed(Key.SIX)){
			Filter.reset();
			Filter.lightness = -0.5;
			currentfilter = "Lightness Adjust (50% Darker)";
		}else if (Input.justpressed(Key.SEVEN)){
			Filter.reset();
			Filter.hue = 180;
			currentfilter = "Hue Shift (180 degrees)";
		}else if (Input.justpressed(Key.EIGHT)){
			Filter.reset();
			Filter.invert = true;
			currentfilter = "Invert Colours";
		}else if (Input.justpressed(Key.NINE)){
			Filter.reset();
			Filter.tint = Col.BLUE;
			currentfilter = "Tint (Blue)";
		}else if (Input.justpressed(Key.ZERO)){
			//Turn off everything
			Filter.reset();
			currentfilter = "None";
		}
	}
}