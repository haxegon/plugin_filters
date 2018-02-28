import haxegon.*;

class Main {	
	function update(){
		gui_id = 0;
		gui_hotitem = 0;
		
		Gfx.drawimage(0, 0, "constellation");
		
		Text.size = 2;
		
		var xp:Int = 5;
		var yp:Int = 2;
		Filter.bloom = slider(xp, yp, 300, 0, 3, Filter.bloom);
		Text.display(320, yp + 8, "Bloom (" + Filter.bloom + ")");
		
		yp += 45;
		Filter.blur = slider(xp, yp, 300, 0, 8, Filter.blur);
		Text.display(320, yp + 8, "Blur (" + Filter.blur + ")");
		
		yp += 45;
		Filter.hue = slider(xp, yp, 300, -720, 720, Filter.hue);
		Text.display(320, yp + 8, "Hue (" + Filter.hue + ")");
		
		yp += 45;
		Filter.saturation = slider(xp, yp, 300, -1, 1, Filter.saturation);
		Text.display(320, yp + 8, "Saturation (" + Filter.saturation + ")");
		
		yp += 45;
		Filter.lightness = slider(xp, yp, 300, -1, 1, Filter.lightness);
		Text.display(320, yp + 8, "Lightness (" + Filter.lightness + ")");
		
		yp += 45;
		Filter.contrast = slider(xp, yp, 300, -1, 1, Filter.contrast);
		Text.display(320, yp + 8, "Contrast (" + Filter.contrast + ")");
		
		yp += 45;
		Filter.vignette = slider(xp, yp, 300, 0, 1, Filter.vignette);
		Text.display(320, yp + 8, "Vignette (" + Filter.vignette + ")");
		
		yp += 45;
		Filter.redshift = slider(xp, yp, 300, -0.01, 0.01, Filter.redshift);
		Text.display(320, yp + 8, "Redshift (" + Filter.redshift + ")");
		
		yp += 45;
		Filter.greenshift = slider(xp, yp, 300, -0.01, 0.01, Filter.greenshift);
		Text.display(320, yp + 8, "Greenshift (" + Filter.greenshift + ")");
		
		yp += 45;
		Filter.blueshift = slider(xp, yp, 300, -0.01, 0.01, Filter.blueshift);
		Text.display(320, yp + 8, "Blueshift (" + Filter.blueshift + ")");
		
		yp += 45;
		Filter.pixelsize = slider(xp, yp, 300, 1, 64, Filter.pixelsize);
		Text.display(320, yp + 8, "Pixel Size (" + Filter.pixelsize + ")");
		
		yp += 45;
		Filter.vcr = radio(xp, yp, "VCR?", Filter.vcr);
		
		yp += 45;
		Filter.invert = radio(xp, yp, "Invert?", Filter.invert);
		
		yp += 45;
		if (button(xp, yp, "[Tint RED]")){ Filter.tint = Col.RED; } xp += 180;
		if (button(xp, yp, "[Tint GREEN]")){ Filter.tint = Col.GREEN; } xp += 180;
		if (button(xp, yp, "[Tint BLUE]")){ Filter.tint = Col.BLUE; } xp += 180;
		if (button(xp, yp, "[Tint YELLOW]")){ Filter.tint = Col.YELLOW; } xp += 180;
		if (button(xp, yp, "[Tint MAGENTA]")){ Filter.tint = Col.MAGENTA; } xp += 180;
		if (button(xp, yp, "[Tint TRANSPARENT (off)]")){ Filter.tint = Col.TRANSPARENT; } xp += 180;
		
		xp = 5;
		yp += 45;
		if (button(xp, yp, "[Reset All (press any key)]") || Input.justpressed(Key.ANY)){
			Filter.reset();
		}
		
		if (!Mouse.leftheld()){
			gui_activeitem = 0;
		}else{
			if (gui_activeitem == 0){
				gui_activeitem = -1;
			}
		}
	}
	
	function slider(x:Float, y:Float, width:Float, leftvalue:Float, rightvalue:Float, currentvalue:Float):Float{
		gui_id++;
		
		if (Geom.inbox(Mouse.x, Mouse.y, x, y, width, buttonsize * 2)){
			gui_hotitem = gui_id;
			if (gui_activeitem == 0 && Mouse.leftheld()){
				gui_activeitem = gui_id;
			}
		}
		
		// Calculate mouse cursor's relative y offset
    var xpos:Float = (width - buttonsize) * Math.abs(leftvalue - currentvalue) / (rightvalue - leftvalue);
		var returnvalue:Float = rightvalue + ((leftvalue - rightvalue) * ((width - (Mouse.x - x)) / width));
		
		// Render the scrollbar
		Gfx.fillbox(x, y + buttonsize - 4, width, 8, 0x888888, 0.5);
		
		if (gui_activeitem == gui_id || gui_hotitem == gui_id){
			Gfx.fillbox(x + xpos, y + 1, buttonsize, (buttonsize * 2) - 2, Col.WHITE);
		}else{
			Gfx.fillbox(x + xpos, y + 1, buttonsize, (buttonsize * 2) - 2, 0xCCCCCC);
		}
		
		if (gui_activeitem == gui_id){
			return Geom.clamp(returnvalue, leftvalue, rightvalue);
		}
		return currentvalue;
	}
	
	function radio(x:Float, y:Float, label:String, currentvalue:Bool):Bool{
		gui_id++;
		
		var width:Float = Text.width(label) + buttonsize + 5;
		var height:Float = buttonsize;
		if (Geom.inbox(Mouse.x, Mouse.y, x, y, width, height)){
			gui_hotitem = gui_id;
			if (gui_activeitem == 0 && Mouse.leftheld()){
				gui_activeitem = gui_id;
			}
		}
		
		if (gui_activeitem == gui_id && gui_hotitem == gui_id){
			Gfx.fillbox(x, y, width, height, Col.WHITE, 0.4);
			
			Gfx.drawbox(x, y, buttonsize, buttonsize, Col.WHITE);
			if (currentvalue){
				Gfx.drawline(x, y, x + buttonsize, y + buttonsize, Col.WHITE);
				Gfx.drawline(x + buttonsize, y, x, y + buttonsize, Col.WHITE);
			}
			Text.display(x + buttonsize + 5, y + 1, label, Col.WHITE);
		}else	if (gui_hotitem == gui_id){
			Gfx.fillbox(x, y, width, height, Col.WHITE, 0.2);
			
			Gfx.drawbox(x, y, buttonsize, buttonsize, Col.WHITE);
			if (currentvalue){
				Gfx.drawline(x, y, x + buttonsize, y + buttonsize, Col.WHITE);
				Gfx.drawline(x + buttonsize, y, x, y + buttonsize, Col.WHITE);
			}
			Text.display(x + buttonsize + 5, y + 1, label, Col.WHITE);
		}else{
			Gfx.drawbox(x, y, buttonsize, buttonsize, 0xDDDDDD);
			if (currentvalue){
				Gfx.drawline(x, y, x + buttonsize, y + buttonsize, 0xDDDDDD);
				Gfx.drawline(x + buttonsize, y, x, y + buttonsize, 0xDDDDDD);
			}
			Text.display(x + buttonsize + 5, y + 1, label, 0xDDDDDD);
		}
		
		if (Mouse.leftclick() && gui_hotitem == gui_id && gui_activeitem == gui_id){
			currentvalue = !currentvalue;
		}
    return currentvalue;
	}
	
	function button(x:Float, y:Float, label:String):Bool{
		gui_id++;
		
		var width:Float = Text.width(label);
		var height:Float = buttonsize;
		if (Geom.inbox(Mouse.x, Mouse.y, x, y, width, height)){
			gui_hotitem = gui_id;
			if (gui_activeitem == 0 && Mouse.leftheld()){
				gui_activeitem = gui_id;
			}
		}
		
		if (gui_activeitem == gui_id && gui_hotitem == gui_id){
			Gfx.fillbox(x, y, width, height, Col.WHITE, 0.4);
			Text.display(x, y + 1, label, Col.WHITE);
		}else	if (gui_hotitem == gui_id){
			Gfx.fillbox(x, y, width, height, Col.WHITE, 0.2);
			Text.display(x, y + 1, label, Col.WHITE);
		}else{
			Text.display(x, y + 1, label, 0xDDDDDD);
		}
		
		if (Mouse.leftclick() && gui_hotitem == gui_id && gui_activeitem == gui_id){
			return true;
		}
    return false;
	}
	
	var gui_id:Int;
	var gui_hotitem:Int;
	var gui_activeitem:Int;
	var buttonsize:Int = 20;
}