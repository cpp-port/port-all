#define CAIRO_FEATURES_H



#define CAIRO_HAS_PDF_SURFACE 1
#define CAIRO_HAS_PS_SURFACE 1
//#define CAIRO_HAS_VG_SURFACE 1
#define CAIRO_HAS_SVG_SURFACE 1
#define CAIRO_HAS_SCRIPT_SURFACE 1
#define CAIRO_HAS_TEE_SURFACE 1
#define CAIRO_HAS_XML_SURFACE 1

#define CAIRO_HAS_PNG_FUNCTIONS 1
#define CAIRO_HAS_FT_FONT 1

#ifdef _WIN32
#define CAIRO_HAS_WIN32_SURFACE 1
#define CAIRO_HAS_WIN32_FONT 1
#define CAIRO_HAS_GL_SURFACE 1
#define CAIRO_HAS_WGL_FUNCTIONS 1
#endif


#ifdef LINUX
#define CAIRO_HAS_XLIB_SURFACE 1
#endif