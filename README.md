# Filters (version 0.1.1 (2018-03-02))
### A plugin for Haxegon: http://www.haxegon.com

**Filters** lets you use fullscreen post-processing shaders in Haxegon!

The current list of available filters are:
 - Bloom
 - Blur
 - Hue shift
 - Saturation adjustment/Grayscale
 - Lightness/Gamma adjustment
 - Colour tinting
 - Contrast adjustment
 - Chromatic Aberation
 - Invert
 - Vignette
 - Pixelation/Mosaic
 - VCR/Static Effect

More effects are coming!

**Filters** is a work in progress, and there are several open issues with it. Stay tuned for more updates as Haxegon approaches 1.0!

## Setup

To install the **Filters** plugin, <a href="https://raw.githubusercontent.com/haxegon/plugin_filters/master/plugins/Filter.hx">download this Filter.hx file</a>, and copy it into your own project's plugins folder.

## Usage

Here is a simple example:

``` haxe
import haxegon.*;

class Main {
  function update(){
    Gfx.drawimage("sky");
    Filter.bloom = 1.0;
    Filter.hue = Filter.hue + 1;
  }
}
```

See <a href="https://github.com/haxegon/plugin_filters/tree/master/examples">the examples folder</a> for more examples. 

## Documentation

Not available yet. Check back later! For now, refer to <a href="https://github.com/haxegon/plugin_filters/tree/master/examples">the examples</a>. 

## Changelog

0.1.1
  - Fixed a crash bug with Neko. Updated for Haxegon 0.12.1.
  
0.1.0
  - Initial release.

## About Filters

*version*: 0.1.1

*dependancies*: Haxegon 0.12.0 or newer.

*Targets*: **Filters** works on all current Haxegon targets - Native, HTML5 and Flash.

*Author*: @terrycavanagh

## About Haxegon

**Filters** is a plugin for Haxegon. For more plugins, see http://www.haxegon.com/plugins/
