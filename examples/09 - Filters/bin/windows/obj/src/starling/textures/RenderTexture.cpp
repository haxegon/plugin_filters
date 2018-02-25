// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
#ifndef INCLUDED_starling_core_Starling
#include <starling/core/Starling.h>
#endif
#ifndef INCLUDED_starling_display_DisplayObject
#include <starling/display/DisplayObject.h>
#endif
#ifndef INCLUDED_starling_display_Image
#include <starling/display/Image.h>
#endif
#ifndef INCLUDED_starling_display_Mesh
#include <starling/display/Mesh.h>
#endif
#ifndef INCLUDED_starling_display_Quad
#include <starling/display/Quad.h>
#endif
#ifndef INCLUDED_starling_events_EventDispatcher
#include <starling/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_starling_filters_FragmentFilter
#include <starling/filters/FragmentFilter.h>
#endif
#ifndef INCLUDED_starling_rendering_BatchToken
#include <starling/rendering/BatchToken.h>
#endif
#ifndef INCLUDED_starling_rendering_Painter
#include <starling/rendering/Painter.h>
#endif
#ifndef INCLUDED_starling_rendering_RenderState
#include <starling/rendering/RenderState.h>
#endif
#ifndef INCLUDED_starling_textures_ConcreteTexture
#include <starling/textures/ConcreteTexture.h>
#endif
#ifndef INCLUDED_starling_textures_RenderTexture
#include <starling/textures/RenderTexture.h>
#endif
#ifndef INCLUDED_starling_textures_SubTexture
#include <starling/textures/SubTexture.h>
#endif
#ifndef INCLUDED_starling_textures_Texture
#include <starling/textures/Texture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_621ee6af00e2eba1_127_new,"starling.textures.RenderTexture","new",0xe121eea7,"starling.textures.RenderTexture.new","starling/textures/RenderTexture.hx",127,0xd2e91a89)
HX_DEFINE_STACK_FRAME(_hx_pos_621ee6af00e2eba1_124_new,"starling.textures.RenderTexture","new",0xe121eea7,"starling.textures.RenderTexture.new","starling/textures/RenderTexture.hx",124,0xd2e91a89)
HX_DEFINE_STACK_FRAME(_hx_pos_621ee6af00e2eba1_134_new,"starling.textures.RenderTexture","new",0xe121eea7,"starling.textures.RenderTexture.new","starling/textures/RenderTexture.hx",134,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_142_dispose,"starling.textures.RenderTexture","dispose",0x01f4ce66,"starling.textures.RenderTexture.dispose","starling/textures/RenderTexture.hx",142,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_168_draw,"starling.textures.RenderTexture","draw",0x15fc8bdd,"starling.textures.RenderTexture.draw","starling/textures/RenderTexture.hx",168,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_189_drawBundled,"starling.textures.RenderTexture","drawBundled",0xbed0a045,"starling.textures.RenderTexture.drawBundled","starling/textures/RenderTexture.hx",189,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_188_drawBundled,"starling.textures.RenderTexture","drawBundled",0xbed0a045,"starling.textures.RenderTexture.drawBundled","starling/textures/RenderTexture.hx",188,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_195_bundlelock,"starling.textures.RenderTexture","bundlelock",0x2ff0c106,"starling.textures.RenderTexture.bundlelock","starling/textures/RenderTexture.hx",195,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_239_bundleunlock,"starling.textures.RenderTexture","bundleunlock",0xaa2d849f,"starling.textures.RenderTexture.bundleunlock","starling/textures/RenderTexture.hx",239,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_246___render,"starling.textures.RenderTexture","__render",0x39f496cf,"starling.textures.RenderTexture.__render","starling/textures/RenderTexture.hx",246,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_278___renderBundled,"starling.textures.RenderTexture","__renderBundled",0x93fdb793,"starling.textures.RenderTexture.__renderBundled","starling/textures/RenderTexture.hx",278,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_331_clear,"starling.textures.RenderTexture","clear",0x8fa2ef94,"starling.textures.RenderTexture.clear","starling/textures/RenderTexture.hx",331,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_342_get_isDoubleBuffered,"starling.textures.RenderTexture","get_isDoubleBuffered",0x1ad731fc,"starling.textures.RenderTexture.get_isDoubleBuffered","starling/textures/RenderTexture.hx",342,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_346_get_isPersistent,"starling.textures.RenderTexture","get_isPersistent",0x5afcbcc3,"starling.textures.RenderTexture.get_isPersistent","starling/textures/RenderTexture.hx",346,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_349_get_base,"starling.textures.RenderTexture","get_base",0x4d6763f3,"starling.textures.RenderTexture.get_base","starling/textures/RenderTexture.hx",349,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_352_get_root,"starling.textures.RenderTexture","get_root",0x58056a04,"starling.textures.RenderTexture.get_root","starling/textures/RenderTexture.hx",352,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_366_get_useDoubleBuffering,"starling.textures.RenderTexture","get_useDoubleBuffering",0x8ac6416c,"starling.textures.RenderTexture.get_useDoubleBuffering","starling/textures/RenderTexture.hx",366,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_387_set_useDoubleBuffering,"starling.textures.RenderTexture","set_useDoubleBuffering",0xbe71bde0,"starling.textures.RenderTexture.set_useDoubleBuffering","starling/textures/RenderTexture.hx",387,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_102_boot,"starling.textures.RenderTexture","boot",0x14a7e40b,"starling.textures.RenderTexture.boot","starling/textures/RenderTexture.hx",102,0xd2e91a89)
HX_LOCAL_STACK_FRAME(_hx_pos_621ee6af00e2eba1_112_boot,"starling.textures.RenderTexture","boot",0x14a7e40b,"starling.textures.RenderTexture.boot","starling/textures/RenderTexture.hx",112,0xd2e91a89)
namespace starling{
namespace textures{

void RenderTexture_obj::__construct(int width,int height,hx::Null< bool >  __o_persistent,hx::Null< Float >  __o_scale,::String __o_format){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::starling::textures::ConcreteTexture textureRoot){
            			HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_127_new)
HXLINE( 127)			textureRoot->clear(null(),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

bool persistent = __o_persistent.Default(true);
Float scale = __o_scale.Default(-1);
::String format = __o_format.Default(HX_HCSTRING("bgra","\xb4","\x74","\x15","\x41"));
            	HX_GC_STACKFRAME(&_hx_pos_621ee6af00e2eba1_124_new)
HXLINE( 125)		this->_isPersistent = persistent;
HXLINE( 126)		this->_activeTexture = ::starling::textures::Texture_obj::empty(width,height,true,false,true,scale,format,null());
HXLINE( 127)		this->_activeTexture->get_root()->set_onRestore( ::Dynamic(new _hx_Closure_0()));
HXLINE( 129)		 ::starling::textures::Texture _hx_tmp = this->_activeTexture;
HXDLIN( 129)		super::__construct(_hx_tmp, ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,width,height),true,null(),false,null());
HXLINE( 131)		bool _hx_tmp1;
HXDLIN( 131)		if (persistent) {
HXLINE( 131)			_hx_tmp1 = ::starling::textures::RenderTexture_obj::get_useDoubleBuffering();
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = false;
            		}
HXDLIN( 131)		if (_hx_tmp1) {
            			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::starling::textures::ConcreteTexture textureRoot1){
            				HX_GC_STACKFRAME(&_hx_pos_621ee6af00e2eba1_134_new)
HXLINE( 134)				textureRoot1->clear(null(),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 133)			this->_bufferTexture = ::starling::textures::Texture_obj::empty(width,height,true,false,true,scale,format,null());
HXLINE( 134)			this->_bufferTexture->get_root()->set_onRestore( ::Dynamic(new _hx_Closure_1()));
HXLINE( 135)			this->_helperImage =  ::starling::display::Image_obj::__alloc( HX_CTX ,this->_bufferTexture);
HXLINE( 136)			this->_helperImage->set_textureSmoothing(HX_("none",b8,12,0a,49));
            		}
            	}

Dynamic RenderTexture_obj::__CreateEmpty() { return new RenderTexture_obj; }

void *RenderTexture_obj::_hx_vtable = 0;

Dynamic RenderTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderTexture_obj > _hx_result = new RenderTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool RenderTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0d644757) {
		if (inClassId<=(int)0x0269bfa1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0269bfa1;
		} else {
			return inClassId==(int)0x0d644757;
		}
	} else {
		return inClassId==(int)0x22869da3;
	}
}

void RenderTexture_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_142_dispose)
HXLINE( 143)		this->_activeTexture->dispose();
HXLINE( 145)		if (this->get_isDoubleBuffered()) {
HXLINE( 147)			this->_bufferTexture->dispose();
HXLINE( 148)			this->_helperImage->dispose();
            		}
HXLINE( 151)		this->super::dispose();
            	}


void RenderTexture_obj::draw( ::starling::display::DisplayObject object, ::openfl::geom::Matrix matrix,hx::Null< Float >  __o_alpha,hx::Null< int >  __o_antiAliasing){
Float alpha = __o_alpha.Default(((Float)1.0));
int antiAliasing = __o_antiAliasing.Default(0);
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_168_draw)
HXLINE( 169)		if (hx::IsNull( object )) {
HXLINE( 169)			return;
            		}
HXLINE( 171)		if (this->_drawing) {
HXLINE( 172)			this->_hx___render(object,matrix,alpha);
            		}
            		else {
HXLINE( 174)			this->_hx___renderBundled(this->_hx___render_dyn(),object,matrix,alpha,antiAliasing);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(RenderTexture_obj,draw,(void))

void RenderTexture_obj::drawBundled( ::Dynamic drawingBlock,hx::Null< int >  __o_antiAliasing){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,drawingBlock) HXARGC(3)
            		void _hx_run( ::starling::display::DisplayObject object, ::openfl::geom::Matrix matrix,Float alpha){
            			HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_189_drawBundled)
HXLINE( 189)			drawingBlock();
            		}
            		HX_END_LOCAL_FUNC3((void))

int antiAliasing = __o_antiAliasing.Default(0);
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_188_drawBundled)
HXLINE( 189)		 ::Dynamic renderBlockFunc =  ::Dynamic(new _hx_Closure_0(drawingBlock));
HXLINE( 190)		this->_hx___renderBundled(renderBlockFunc,null(),null(),((Float)1.0),antiAliasing);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderTexture_obj,drawBundled,(void))

void RenderTexture_obj::bundlelock(hx::Null< int >  __o_antiAliasing){
int antiAliasing = __o_antiAliasing.Default(0);
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_195_bundlelock)
HXLINE( 196)		 ::starling::rendering::Painter painter = ::starling::core::Starling_obj::get_current()->get_painter();
HXLINE( 197)		 ::starling::rendering::RenderState state = painter->get_state();
HXLINE( 199)		if (!(::starling::core::Starling_obj::get_current()->get_contextValid())) {
HXLINE( 199)			return;
            		}
HXLINE( 202)		if (this->get_isDoubleBuffered()) {
HXLINE( 204)			 ::starling::textures::Texture tmpTexture = this->_activeTexture;
HXLINE( 205)			this->_activeTexture = this->_bufferTexture;
HXLINE( 206)			this->_bufferTexture = tmpTexture;
HXLINE( 207)			this->_helperImage->set_texture(this->_bufferTexture);
            		}
HXLINE( 210)		painter->pushState(null());
HXLINE( 212)		 ::starling::textures::Texture rootTexture = this->_activeTexture->get_root();
HXLINE( 213)		Float _hx_tmp = rootTexture->get_width();
HXDLIN( 213)		Float _hx_tmp1 = rootTexture->get_height();
HXDLIN( 213)		Float _hx_tmp2 = this->get_width();
HXDLIN( 213)		state->setProjectionMatrix((int)0,(int)0,_hx_tmp,_hx_tmp1,_hx_tmp2,this->get_height(),null());
HXLINE( 216)		 ::openfl::geom::Rectangle _hx_tmp3 = ::starling::textures::RenderTexture_obj::sClipRect;
HXDLIN( 216)		Float _hx_tmp4 = this->_activeTexture->get_width();
HXDLIN( 216)		_hx_tmp3->setTo((int)0,(int)0,_hx_tmp4,this->_activeTexture->get_height());
HXLINE( 218)		state->set_clipRect(::starling::textures::RenderTexture_obj::sClipRect);
HXLINE( 219)		state->setRenderTarget(this->_activeTexture,true,antiAliasing);
HXLINE( 221)		painter->prepareToDraw();
HXLINE( 222)		painter->get_context()->setStencilActions((int)2,(int)0,null(),null(),null());
HXLINE( 225)		bool _hx_tmp5;
HXDLIN( 225)		bool _hx_tmp6;
HXDLIN( 225)		if (!(this->get_isDoubleBuffered())) {
HXLINE( 225)			_hx_tmp6 = !(this->get_isPersistent());
            		}
            		else {
HXLINE( 225)			_hx_tmp6 = true;
            		}
HXDLIN( 225)		if (!(_hx_tmp6)) {
HXLINE( 225)			_hx_tmp5 = !(this->_bufferReady);
            		}
            		else {
HXLINE( 225)			_hx_tmp5 = true;
            		}
HXDLIN( 225)		if (_hx_tmp5) {
HXLINE( 226)			painter->clear(null(),null());
            		}
HXLINE( 229)		bool _hx_tmp7;
HXDLIN( 229)		if (this->get_isDoubleBuffered()) {
HXLINE( 229)			_hx_tmp7 = this->_bufferReady;
            		}
            		else {
HXLINE( 229)			_hx_tmp7 = false;
            		}
HXDLIN( 229)		if (_hx_tmp7) {
HXLINE( 230)			this->_helperImage->render(painter);
            		}
            		else {
HXLINE( 232)			this->_bufferReady = true;
            		}
HXLINE( 234)		this->_drawing = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,bundlelock,(void))

void RenderTexture_obj::bundleunlock(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_239_bundleunlock)
HXLINE( 240)		this->_drawing = false;
HXLINE( 241)		 ::starling::rendering::Painter painter = ::starling::core::Starling_obj::get_current()->get_painter();
HXLINE( 242)		painter->popState(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,bundleunlock,(void))

void RenderTexture_obj::_hx___render( ::starling::display::DisplayObject object, ::openfl::geom::Matrix matrix,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_246___render)
HXLINE( 247)		 ::starling::rendering::Painter painter = ::starling::core::Starling_obj::get_current()->get_painter();
HXLINE( 248)		 ::starling::rendering::RenderState state = painter->get_state();
HXLINE( 249)		bool wasCacheEnabled = painter->get_cacheEnabled();
HXLINE( 250)		 ::starling::filters::FragmentFilter filter = object->get_filter();
HXLINE( 251)		 ::starling::display::DisplayObject mask = object->get_mask();
HXLINE( 253)		painter->set_cacheEnabled(false);
HXLINE( 254)		painter->pushState(null());
HXLINE( 256)		state->set_alpha((object->get_alpha() * alpha));
HXLINE( 257)		state->setModelviewMatricesToIdentity();
HXLINE( 258)		::String _hx_tmp;
HXDLIN( 258)		if ((object->get_blendMode() == HX_("auto",6f,df,76,40))) {
HXLINE( 258)			_hx_tmp = HX_("normal",27,72,69,30);
            		}
            		else {
HXLINE( 258)			_hx_tmp = object->get_blendMode();
            		}
HXDLIN( 258)		state->set_blendMode(_hx_tmp);
HXLINE( 261)		if (hx::IsNotNull( matrix )) {
HXLINE( 261)			state->transformModelviewMatrix(matrix);
            		}
            		else {
HXLINE( 262)			state->transformModelviewMatrix(object->get_transformationMatrix());
            		}
HXLINE( 264)		if (hx::IsNotNull( mask )) {
HXLINE( 264)			painter->drawMask(mask,object);
            		}
HXLINE( 266)		if (hx::IsNotNull( filter )) {
HXLINE( 266)			filter->render(painter);
            		}
            		else {
HXLINE( 267)			object->render(painter);
            		}
HXLINE( 269)		if (hx::IsNotNull( mask )) {
HXLINE( 269)			painter->eraseMask(mask,object);
            		}
HXLINE( 271)		painter->popState(null());
HXLINE( 272)		painter->set_cacheEnabled(wasCacheEnabled);
            	}


HX_DEFINE_DYNAMIC_FUNC3(RenderTexture_obj,_hx___render,(void))

void RenderTexture_obj::_hx___renderBundled( ::Dynamic renderBlock, ::starling::display::DisplayObject object, ::openfl::geom::Matrix matrix,hx::Null< Float >  __o_alpha,hx::Null< int >  __o_antiAliasing){
Float alpha = __o_alpha.Default(((Float)1.0));
int antiAliasing = __o_antiAliasing.Default(0);
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_278___renderBundled)
HXLINE( 279)		 ::starling::rendering::Painter painter = ::starling::core::Starling_obj::get_current()->get_painter();
HXLINE( 280)		 ::starling::rendering::RenderState state = painter->get_state();
HXLINE( 282)		if (!(::starling::core::Starling_obj::get_current()->get_contextValid())) {
HXLINE( 282)			return;
            		}
HXLINE( 285)		if (this->get_isDoubleBuffered()) {
HXLINE( 287)			 ::starling::textures::Texture tmpTexture = this->_activeTexture;
HXLINE( 288)			this->_activeTexture = this->_bufferTexture;
HXLINE( 289)			this->_bufferTexture = tmpTexture;
HXLINE( 290)			this->_helperImage->set_texture(this->_bufferTexture);
            		}
HXLINE( 293)		painter->pushState(null());
HXLINE( 295)		 ::starling::textures::Texture rootTexture = this->_activeTexture->get_root();
HXLINE( 296)		Float _hx_tmp = rootTexture->get_width();
HXDLIN( 296)		Float _hx_tmp1 = rootTexture->get_height();
HXDLIN( 296)		Float _hx_tmp2 = this->get_width();
HXDLIN( 296)		state->setProjectionMatrix((int)0,(int)0,_hx_tmp,_hx_tmp1,_hx_tmp2,this->get_height(),null());
HXLINE( 299)		 ::openfl::geom::Rectangle _hx_tmp3 = ::starling::textures::RenderTexture_obj::sClipRect;
HXDLIN( 299)		Float _hx_tmp4 = this->_activeTexture->get_width();
HXDLIN( 299)		_hx_tmp3->setTo((int)0,(int)0,_hx_tmp4,this->_activeTexture->get_height());
HXLINE( 301)		state->set_clipRect(::starling::textures::RenderTexture_obj::sClipRect);
HXLINE( 302)		state->setRenderTarget(this->_activeTexture,true,antiAliasing);
HXLINE( 304)		painter->prepareToDraw();
HXLINE( 305)		painter->get_context()->setStencilActions((int)2,(int)0,null(),null(),null());
HXLINE( 308)		bool _hx_tmp5;
HXDLIN( 308)		bool _hx_tmp6;
HXDLIN( 308)		if (!(this->get_isDoubleBuffered())) {
HXLINE( 308)			_hx_tmp6 = !(this->get_isPersistent());
            		}
            		else {
HXLINE( 308)			_hx_tmp6 = true;
            		}
HXDLIN( 308)		if (!(_hx_tmp6)) {
HXLINE( 308)			_hx_tmp5 = !(this->_bufferReady);
            		}
            		else {
HXLINE( 308)			_hx_tmp5 = true;
            		}
HXDLIN( 308)		if (_hx_tmp5) {
HXLINE( 309)			painter->clear(null(),null());
            		}
HXLINE( 312)		bool _hx_tmp7;
HXDLIN( 312)		if (this->get_isDoubleBuffered()) {
HXLINE( 312)			_hx_tmp7 = this->_bufferReady;
            		}
            		else {
HXLINE( 312)			_hx_tmp7 = false;
            		}
HXDLIN( 312)		if (_hx_tmp7) {
HXLINE( 313)			this->_helperImage->render(painter);
            		}
            		else {
HXLINE( 315)			this->_bufferReady = true;
            		}
HXLINE( 317)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 319)			this->_drawing = true;
HXLINE( 320)			renderBlock(object,matrix,alpha);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 324)		this->_drawing = false;
HXLINE( 325)		painter->popState(null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(RenderTexture_obj,_hx___renderBundled,(void))

void RenderTexture_obj::clear(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_331_clear)
HXLINE( 332)		this->_activeTexture->get_root()->clear(color,alpha);
HXLINE( 333)		this->_bufferReady = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(RenderTexture_obj,clear,(void))

bool RenderTexture_obj::get_isDoubleBuffered(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_342_get_isDoubleBuffered)
HXDLIN( 342)		return hx::IsNotNull( this->_bufferTexture );
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,get_isDoubleBuffered,return )

bool RenderTexture_obj::get_isPersistent(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_346_get_isPersistent)
HXDLIN( 346)		return this->_isPersistent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,get_isPersistent,return )

 ::openfl::display3D::textures::TextureBase RenderTexture_obj::get_base(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_349_get_base)
HXDLIN( 349)		return this->_activeTexture->get_base();
            	}


 ::starling::textures::ConcreteTexture RenderTexture_obj::get_root(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_352_get_root)
HXDLIN( 352)		return this->_activeTexture->get_root();
            	}


::String RenderTexture_obj::USE_DOUBLE_BUFFERING_DATA_NAME;

 ::openfl::geom::Rectangle RenderTexture_obj::sClipRect;

bool RenderTexture_obj::get_useDoubleBuffering(){
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_366_get_useDoubleBuffering)
HXDLIN( 366)		if (hx::IsNotNull( ::starling::core::Starling_obj::get_current() )) {
HXLINE( 368)			 ::starling::rendering::Painter painter = ::starling::core::Starling_obj::get_current()->get_painter();
HXLINE( 369)			 ::haxe::ds::StringMap sharedData = painter->get_sharedData();
HXLINE( 371)			if (sharedData->exists(HX_("starling.textures.RenderTexture.useDoubleBuffering",a3,87,2a,82))) {
HXLINE( 373)				return ( (bool)(sharedData->get(HX_("starling.textures.RenderTexture.useDoubleBuffering",a3,87,2a,82))) );
            			}
            			else {
HXLINE( 377)				::String profile;
HXDLIN( 377)				if (hx::IsNotNull( painter->get_profile() )) {
HXLINE( 377)					profile = painter->get_profile();
            				}
            				else {
HXLINE( 377)					profile = HX_("baseline",85,dc,27,11);
            				}
HXLINE( 378)				bool value;
HXDLIN( 378)				if ((profile != HX_("baseline",85,dc,27,11))) {
HXLINE( 378)					value = (profile == HX_("baselineConstrained",d1,73,c8,e8));
            				}
            				else {
HXLINE( 378)					value = true;
            				}
HXLINE( 379)				sharedData->set(HX_("starling.textures.RenderTexture.useDoubleBuffering",a3,87,2a,82),value);
HXLINE( 380)				return value;
            			}
            		}
            		else {
HXLINE( 383)			return false;
            		}
HXLINE( 366)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RenderTexture_obj,get_useDoubleBuffering,return )

bool RenderTexture_obj::set_useDoubleBuffering(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_621ee6af00e2eba1_387_set_useDoubleBuffering)
HXLINE( 388)		if (hx::IsNull( ::starling::core::Starling_obj::get_current() )) {
HXLINE( 389)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Starling not yet initialized",d7,01,2c,69)));
            		}
            		else {
HXLINE( 391)			::starling::core::Starling_obj::get_current()->get_painter()->get_sharedData()->set(HX_("starling.textures.RenderTexture.useDoubleBuffering",a3,87,2a,82),value);
            		}
HXLINE( 392)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RenderTexture_obj,set_useDoubleBuffering,return )


hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__new(int width,int height,hx::Null< bool >  __o_persistent,hx::Null< Float >  __o_scale,::String __o_format) {
	hx::ObjectPtr< RenderTexture_obj > __this = new RenderTexture_obj();
	__this->__construct(width,height,__o_persistent,__o_scale,__o_format);
	return __this;
}

hx::ObjectPtr< RenderTexture_obj > RenderTexture_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height,hx::Null< bool >  __o_persistent,hx::Null< Float >  __o_scale,::String __o_format) {
	RenderTexture_obj *__this = (RenderTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RenderTexture_obj), true, "starling.textures.RenderTexture"));
	*(void **)__this = RenderTexture_obj::_hx_vtable;
	__this->__construct(width,height,__o_persistent,__o_scale,__o_format);
	return __this;
}

RenderTexture_obj::RenderTexture_obj()
{
}

void RenderTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderTexture);
	HX_MARK_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_MARK_MEMBER_NAME(_bufferTexture,"_bufferTexture");
	HX_MARK_MEMBER_NAME(_helperImage,"_helperImage");
	HX_MARK_MEMBER_NAME(_drawing,"_drawing");
	HX_MARK_MEMBER_NAME(_bufferReady,"_bufferReady");
	HX_MARK_MEMBER_NAME(_isPersistent,"_isPersistent");
	HX_MARK_MEMBER_NAME(haxegonpreviousRenderTarget,"haxegonpreviousRenderTarget");
	 ::starling::textures::SubTexture_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RenderTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_VISIT_MEMBER_NAME(_bufferTexture,"_bufferTexture");
	HX_VISIT_MEMBER_NAME(_helperImage,"_helperImage");
	HX_VISIT_MEMBER_NAME(_drawing,"_drawing");
	HX_VISIT_MEMBER_NAME(_bufferReady,"_bufferReady");
	HX_VISIT_MEMBER_NAME(_isPersistent,"_isPersistent");
	HX_VISIT_MEMBER_NAME(haxegonpreviousRenderTarget,"haxegonpreviousRenderTarget");
	 ::starling::textures::SubTexture_obj::__Visit(HX_VISIT_ARG);
}

hx::Val RenderTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_drawing") ) { return hx::Val( _drawing ); }
		if (HX_FIELD_EQ(inName,"__render") ) { return hx::Val( _hx___render_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_base") ) { return hx::Val( get_base_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return hx::Val( get_root_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bundlelock") ) { return hx::Val( bundlelock_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawBundled") ) { return hx::Val( drawBundled_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperImage") ) { return hx::Val( _helperImage ); }
		if (HX_FIELD_EQ(inName,"_bufferReady") ) { return hx::Val( _bufferReady ); }
		if (HX_FIELD_EQ(inName,"bundleunlock") ) { return hx::Val( bundleunlock_dyn() ); }
		if (HX_FIELD_EQ(inName,"isPersistent") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_isPersistent() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isPersistent") ) { return hx::Val( _isPersistent ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { return hx::Val( _activeTexture ); }
		if (HX_FIELD_EQ(inName,"_bufferTexture") ) { return hx::Val( _bufferTexture ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__renderBundled") ) { return hx::Val( _hx___renderBundled_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isDoubleBuffered") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_isDoubleBuffered() ); }
		if (HX_FIELD_EQ(inName,"get_isPersistent") ) { return hx::Val( get_isPersistent_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_isDoubleBuffered") ) { return hx::Val( get_isDoubleBuffered_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"haxegonpreviousRenderTarget") ) { return hx::Val( haxegonpreviousRenderTarget ); }
	}
	return super::__Field(inName,inCallProp);
}

bool RenderTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"sClipRect") ) { outValue = ( sClipRect ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useDoubleBuffering") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_useDoubleBuffering() ); return true; } }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_useDoubleBuffering") ) { outValue = get_useDoubleBuffering_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_useDoubleBuffering") ) { outValue = set_useDoubleBuffering_dyn(); return true; }
	}
	return false;
}

hx::Val RenderTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_drawing") ) { _drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_helperImage") ) { _helperImage=inValue.Cast<  ::starling::display::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferReady") ) { _bufferReady=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isPersistent") ) { _isPersistent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { _activeTexture=inValue.Cast<  ::starling::textures::Texture >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferTexture") ) { _bufferTexture=inValue.Cast<  ::starling::textures::Texture >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"haxegonpreviousRenderTarget") ) { haxegonpreviousRenderTarget=inValue.Cast<  ::starling::textures::Texture >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RenderTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"sClipRect") ) { sClipRect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"useDoubleBuffering") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_useDoubleBuffering(ioValue.Cast< bool >()) ); }
	}
	return false;
}

void RenderTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"));
	outFields->push(HX_HCSTRING("_bufferTexture","\xfc","\xc3","\xb0","\x12"));
	outFields->push(HX_HCSTRING("_helperImage","\x0e","\x51","\xee","\xee"));
	outFields->push(HX_HCSTRING("_drawing","\xdf","\x94","\xa0","\x35"));
	outFields->push(HX_HCSTRING("_bufferReady","\x44","\xe1","\x0f","\xea"));
	outFields->push(HX_HCSTRING("_isPersistent","\xc0","\x21","\x83","\xb4"));
	outFields->push(HX_HCSTRING("haxegonpreviousRenderTarget","\xfe","\x96","\x19","\xd7"));
	outFields->push(HX_HCSTRING("isDoubleBuffered","\x1a","\x6b","\x45","\xd5"));
	outFields->push(HX_HCSTRING("isPersistent","\xe1","\x8e","\x14","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RenderTexture_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::starling::textures::Texture*/ ,(int)offsetof(RenderTexture_obj,_activeTexture),HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94")},
	{hx::fsObject /*::starling::textures::Texture*/ ,(int)offsetof(RenderTexture_obj,_bufferTexture),HX_HCSTRING("_bufferTexture","\xfc","\xc3","\xb0","\x12")},
	{hx::fsObject /*::starling::display::Image*/ ,(int)offsetof(RenderTexture_obj,_helperImage),HX_HCSTRING("_helperImage","\x0e","\x51","\xee","\xee")},
	{hx::fsBool,(int)offsetof(RenderTexture_obj,_drawing),HX_HCSTRING("_drawing","\xdf","\x94","\xa0","\x35")},
	{hx::fsBool,(int)offsetof(RenderTexture_obj,_bufferReady),HX_HCSTRING("_bufferReady","\x44","\xe1","\x0f","\xea")},
	{hx::fsBool,(int)offsetof(RenderTexture_obj,_isPersistent),HX_HCSTRING("_isPersistent","\xc0","\x21","\x83","\xb4")},
	{hx::fsObject /*::starling::textures::Texture*/ ,(int)offsetof(RenderTexture_obj,haxegonpreviousRenderTarget),HX_HCSTRING("haxegonpreviousRenderTarget","\xfe","\x96","\x19","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo RenderTexture_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &RenderTexture_obj::USE_DOUBLE_BUFFERING_DATA_NAME,HX_HCSTRING("USE_DOUBLE_BUFFERING_DATA_NAME","\xad","\x26","\xb8","\xb3")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(void *) &RenderTexture_obj::sClipRect,HX_HCSTRING("sClipRect","\xa7","\x77","\x8e","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String RenderTexture_obj_sMemberFields[] = {
	HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"),
	HX_HCSTRING("_bufferTexture","\xfc","\xc3","\xb0","\x12"),
	HX_HCSTRING("_helperImage","\x0e","\x51","\xee","\xee"),
	HX_HCSTRING("_drawing","\xdf","\x94","\xa0","\x35"),
	HX_HCSTRING("_bufferReady","\x44","\xe1","\x0f","\xea"),
	HX_HCSTRING("_isPersistent","\xc0","\x21","\x83","\xb4"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawBundled","\xfe","\x62","\xc0","\x94"),
	HX_HCSTRING("haxegonpreviousRenderTarget","\xfe","\x96","\x19","\xd7"),
	HX_HCSTRING("bundlelock","\x6d","\x78","\xa1","\x74"),
	HX_HCSTRING("bundleunlock","\xc6","\x23","\x08","\x06"),
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	HX_HCSTRING("__renderBundled","\xcc","\xca","\x17","\xcf"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_isDoubleBuffered","\x23","\xd0","\xaf","\xf3"),
	HX_HCSTRING("get_isPersistent","\x6a","\x7b","\xb3","\xd6"),
	HX_HCSTRING("get_base","\x9a","\xa3","\xcb","\xc0"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	::String(null()) };

static void RenderTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RenderTexture_obj::USE_DOUBLE_BUFFERING_DATA_NAME,"USE_DOUBLE_BUFFERING_DATA_NAME");
	HX_MARK_MEMBER_NAME(RenderTexture_obj::sClipRect,"sClipRect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::USE_DOUBLE_BUFFERING_DATA_NAME,"USE_DOUBLE_BUFFERING_DATA_NAME");
	HX_VISIT_MEMBER_NAME(RenderTexture_obj::sClipRect,"sClipRect");
};

#endif

hx::Class RenderTexture_obj::__mClass;

static ::String RenderTexture_obj_sStaticFields[] = {
	HX_HCSTRING("USE_DOUBLE_BUFFERING_DATA_NAME","\xad","\x26","\xb8","\xb3"),
	HX_HCSTRING("sClipRect","\xa7","\x77","\x8e","\xf4"),
	HX_HCSTRING("get_useDoubleBuffering","\x53","\xf7","\x9f","\xc1"),
	HX_HCSTRING("set_useDoubleBuffering","\xc7","\x73","\x4b","\xf5"),
	::String(null())
};

void RenderTexture_obj::__register()
{
	hx::Object *dummy = new RenderTexture_obj;
	RenderTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("starling.textures.RenderTexture","\x35","\x0f","\x76","\xc8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &RenderTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &RenderTexture_obj::__SetStatic;
	__mClass->mMarkFunc = RenderTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(RenderTexture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RenderTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RenderTexture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_621ee6af00e2eba1_102_boot)
HXDLIN( 102)		USE_DOUBLE_BUFFERING_DATA_NAME = HX_("starling.textures.RenderTexture.useDoubleBuffering",a3,87,2a,82);
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_621ee6af00e2eba1_112_boot)
HXDLIN( 112)		sClipRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace starling
} // end namespace textures
