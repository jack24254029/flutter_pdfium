
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#if _WIN32
#include <windows.h>
#else
#include <pthread.h>
#include <unistd.h>
#endif

#if _WIN32
#define FFI_PLUGIN_EXPORT __declspec(dllexport)
#else
#define FFI_PLUGIN_EXPORT
#endif

#include "pdfium/fpdf_transformpage.h"
//  Set "MediaBox" entry to the page dictionary.
//  page   - Handle to a page.
//  left   - The left of the rectangle.
//  bottom - The bottom of the rectangle.
//  right  - The right of the rectangle.
//  top    - The top of the rectangle.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_SetMediaBox(FPDF_PAGE page,float left,float bottom,float right,float top);
//  Set "CropBox" entry to the page dictionary.
//  page   - Handle to a page.
//  left   - The left of the rectangle.
//  bottom - The bottom of the rectangle.
//  right  - The right of the rectangle.
//  top    - The top of the rectangle.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_SetCropBox(FPDF_PAGE page,float left,float bottom,float right,float top);
//  Set "BleedBox" entry to the page dictionary.
//  page   - Handle to a page.
//  left   - The left of the rectangle.
//  bottom - The bottom of the rectangle.
//  right  - The right of the rectangle.
//  top    - The top of the rectangle.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_SetBleedBox(FPDF_PAGE page,float left,float bottom,float right,float top);
//  Set "TrimBox" entry to the page dictionary.
//  page   - Handle to a page.
//  left   - The left of the rectangle.
//  bottom - The bottom of the rectangle.
//  right  - The right of the rectangle.
//  top    - The top of the rectangle.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_SetTrimBox(FPDF_PAGE page,float left,float bottom,float right,float top);
//  Set "ArtBox" entry to the page dictionary.
//  page   - Handle to a page.
//  left   - The left of the rectangle.
//  bottom - The bottom of the rectangle.
//  right  - The right of the rectangle.
//  top    - The top of the rectangle.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_SetArtBox(FPDF_PAGE page,float left,float bottom,float right,float top);
//  Get "MediaBox" entry from the page dictionary.
//  page   - Handle to a page.
//  left   - Pointer to a float value receiving the left of the rectangle.
//  bottom - Pointer to a float value receiving the bottom of the rectangle.
//  right  - Pointer to a float value receiving the right of the rectangle.
//  top    - Pointer to a float value receiving the top of the rectangle.
//  On success, return true and write to the out parameters. Otherwise return
//  false and leave the out parameters unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_GetMediaBox(FPDF_PAGE page,float * left,float * bottom,float * right,float * top);
//  Get "CropBox" entry from the page dictionary.
//  page   - Handle to a page.
//  left   - Pointer to a float value receiving the left of the rectangle.
//  bottom - Pointer to a float value receiving the bottom of the rectangle.
//  right  - Pointer to a float value receiving the right of the rectangle.
//  top    - Pointer to a float value receiving the top of the rectangle.
//  On success, return true and write to the out parameters. Otherwise return
//  false and leave the out parameters unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_GetCropBox(FPDF_PAGE page,float * left,float * bottom,float * right,float * top);
//  Get "BleedBox" entry from the page dictionary.
//  page   - Handle to a page.
//  left   - Pointer to a float value receiving the left of the rectangle.
//  bottom - Pointer to a float value receiving the bottom of the rectangle.
//  right  - Pointer to a float value receiving the right of the rectangle.
//  top    - Pointer to a float value receiving the top of the rectangle.
//  On success, return true and write to the out parameters. Otherwise return
//  false and leave the out parameters unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_GetBleedBox(FPDF_PAGE page,float * left,float * bottom,float * right,float * top);
//  Get "TrimBox" entry from the page dictionary.
//  page   - Handle to a page.
//  left   - Pointer to a float value receiving the left of the rectangle.
//  bottom - Pointer to a float value receiving the bottom of the rectangle.
//  right  - Pointer to a float value receiving the right of the rectangle.
//  top    - Pointer to a float value receiving the top of the rectangle.
//  On success, return true and write to the out parameters. Otherwise return
//  false and leave the out parameters unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_GetTrimBox(FPDF_PAGE page,float * left,float * bottom,float * right,float * top);
//  Get "ArtBox" entry from the page dictionary.
//  page   - Handle to a page.
//  left   - Pointer to a float value receiving the left of the rectangle.
//  bottom - Pointer to a float value receiving the bottom of the rectangle.
//  right  - Pointer to a float value receiving the right of the rectangle.
//  top    - Pointer to a float value receiving the top of the rectangle.
//  On success, return true and write to the out parameters. Otherwise return
//  false and leave the out parameters unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_GetArtBox(FPDF_PAGE page,float * left,float * bottom,float * right,float * top);
//  Apply transforms to |page|.
//  If |matrix| is provided it will be applied to transform the page.
//  If |clipRect| is provided it will be used to clip the resulting page.
//  If neither |matrix| or |clipRect| are provided this method returns |false|.
//  Returns |true| if transforms are applied.
//  This function will transform the whole page, and would take effect to all the
//  objects in the page.
//  page        - Page handle.
//  matrix      - Transform matrix.
//  clipRect    - Clipping rectangle.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_TransFormWithClip(FPDF_PAGE page,const FS_MATRIX * matrix,const FS_RECTF * clipRect);
//  Transform (scale, rotate, shear, move) the clip path of page object.
//  page_object - Handle to a page object. Returned by
//  FPDFPageObj_NewImageObj().
//  a  - The coefficient "a" of the matrix.
//  b  - The coefficient "b" of the matrix.
//  c  - The coefficient "c" of the matrix.
//  d  - The coefficient "d" of the matrix.
//  e  - The coefficient "e" of the matrix.
//  f  - The coefficient "f" of the matrix.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPageObj_TransformClipPath(FPDF_PAGEOBJECT page_object,double a,double b,double c,double d,double e,double f);
//  Experimental API.
//  Get the clip path of the page object.
//    page object - Handle to a page object. Returned by e.g.
//                  FPDFPage_GetObject().
//  Returns the handle to the clip path, or NULL on failure. The caller does not
//  take ownership of the returned FPDF_CLIPPATH. Instead, it remains valid until
//  FPDF_ClosePage() is called for the page containing |page_object|.
FFI_PLUGIN_EXPORT FPDF_CLIPPATH PDFIUM_FPDFPageObj_GetClipPath(FPDF_PAGEOBJECT page_object);
//  Experimental API.
//  Get number of paths inside |clip_path|.
//    clip_path - handle to a clip_path.
//  Returns the number of objects in |clip_path| or -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFClipPath_CountPaths(FPDF_CLIPPATH clip_path);
//  Experimental API.
//  Get number of segments inside one path of |clip_path|.
//    clip_path  - handle to a clip_path.
//    path_index - index into the array of paths of the clip path.
//  Returns the number of segments or -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFClipPath_CountPathSegments(FPDF_CLIPPATH clip_path,int path_index);
//  Experimental API.
//  Get segment in one specific path of |clip_path| at index.
//    clip_path     - handle to a clip_path.
//    path_index    - the index of a path.
//    segment_index - the index of a segment.
//  Returns the handle to the segment, or NULL on failure. The caller does not
//  take ownership of the returned FPDF_PATHSEGMENT. Instead, it remains valid
//  until FPDF_ClosePage() is called for the page containing |clip_path|.
FFI_PLUGIN_EXPORT FPDF_PATHSEGMENT PDFIUM_FPDFClipPath_GetPathSegment(FPDF_CLIPPATH clip_path,int path_index,int segment_index);
//  Create a new clip path, with a rectangle inserted.
//  Caller takes ownership of the returned FPDF_CLIPPATH. It should be freed with
//  FPDF_DestroyClipPath().
//  left   - The left of the clip box.
//  bottom - The bottom of the clip box.
//  right  - The right of the clip box.
//  top    - The top of the clip box.
FFI_PLUGIN_EXPORT FPDF_CLIPPATH PDFIUM_FPDF_CreateClipPath(float left,float bottom,float right,float top);
//  Destroy the clip path.
//  clipPath - A handle to the clip path. It will be invalid after this call.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_DestroyClipPath(FPDF_CLIPPATH clipPath);
//  Clip the page content, the page content that outside the clipping region
//  become invisible.
//  A clip path will be inserted before the page content stream or content array.
//  In this way, the page content will be clipped by this clip path.
//  page        - A page handle.
//  clipPath    - A handle to the clip path. (Does not take ownership.)
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_InsertClipPath(FPDF_PAGE page,FPDF_CLIPPATH clipPath);
#include "pdfium/fpdf_annot.h"
//  Experimental API.
//  Check if an annotation subtype is currently supported for creation.
//  Currently supported subtypes:
//     - circle
//     - fileattachment
//     - freetext
//     - highlight
//     - ink
//     - link
//     - popup
//     - square,
//     - squiggly
//     - stamp
//     - strikeout
//     - text
//     - underline
//    subtype   - the subtype to be checked.
//  Returns true if this subtype supported.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_IsSupportedSubtype(FPDF_ANNOTATION_SUBTYPE subtype);
//  Experimental API.
//  Create an annotation in |page| of the subtype |subtype|. If the specified
//  subtype is illegal or unsupported, then a new annotation will not be created.
//  Must call FPDFPage_CloseAnnot() when the annotation returned by this
//  function is no longer needed.
//    page      - handle to a page.
//    subtype   - the subtype of the new annotation.
//  Returns a handle to the new annotation object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ANNOTATION PDFIUM_FPDFPage_CreateAnnot(FPDF_PAGE page,FPDF_ANNOTATION_SUBTYPE subtype);
//  Experimental API.
//  Get the number of annotations in |page|.
//    page   - handle to a page.
//  Returns the number of annotations in |page|.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_GetAnnotCount(FPDF_PAGE page);
//  Experimental API.
//  Get annotation in |page| at |index|. Must call FPDFPage_CloseAnnot() when the
//  annotation returned by this function is no longer needed.
//    page  - handle to a page.
//    index - the index of the annotation.
//  Returns a handle to the annotation object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ANNOTATION PDFIUM_FPDFPage_GetAnnot(FPDF_PAGE page,int index);
//  Experimental API.
//  Get the index of |annot| in |page|. This is the opposite of
//  FPDFPage_GetAnnot().
//    page  - handle to the page that the annotation is on.
//    annot - handle to an annotation.
//  Returns the index of |annot|, or -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_GetAnnotIndex(FPDF_PAGE page,FPDF_ANNOTATION annot);
//  Experimental API.
//  Close an annotation. Must be called when the annotation returned by
//  FPDFPage_CreateAnnot() or FPDFPage_GetAnnot() is no longer needed. This
//  function does not remove the annotation from the document.
//    annot  - handle to an annotation.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_CloseAnnot(FPDF_ANNOTATION annot);
//  Experimental API.
//  Remove the annotation in |page| at |index|.
//    page  - handle to a page.
//    index - the index of the annotation.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_RemoveAnnot(FPDF_PAGE page,int index);
//  Experimental API.
//  Get the subtype of an annotation.
//    annot  - handle to an annotation.
//  Returns the annotation subtype.
FFI_PLUGIN_EXPORT FPDF_ANNOTATION_SUBTYPE PDFIUM_FPDFAnnot_GetSubtype(FPDF_ANNOTATION annot);
//  Experimental API.
//  Check if an annotation subtype is currently supported for object extraction,
//  update, and removal.
//  Currently supported subtypes: ink and stamp.
//    subtype   - the subtype to be checked.
//  Returns true if this subtype supported.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_IsObjectSupportedSubtype(FPDF_ANNOTATION_SUBTYPE subtype);
//  Experimental API.
//  Update |obj| in |annot|. |obj| must be in |annot| already and must have
//  been retrieved by FPDFAnnot_GetObject(). Currently, only ink and stamp
//  annotations are supported by this API. Also note that only path, image, and
//  text objects have APIs for modification; see FPDFPath_*(), FPDFText_*(), and
//  FPDFImageObj_*().
//    annot  - handle to an annotation.
//    obj    - handle to the object that |annot| needs to update.
//  Return true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_UpdateObject(FPDF_ANNOTATION annot,FPDF_PAGEOBJECT obj);
//  Experimental API.
//  Add a new InkStroke, represented by an array of points, to the InkList of
//  |annot|. The API creates an InkList if one doesn't already exist in |annot|.
//  This API works only for ink annotations. Please refer to ISO 32000-1:2008
//  spec, section 12.5.6.13.
//    annot       - handle to an annotation.
//    points      - pointer to a FS_POINTF array representing input points.
//    point_count - number of elements in |points| array. This should not exceed
//                  the maximum value that can be represented by an int32_t).
//  Returns the 0-based index at which the new InkStroke is added in the InkList
//  of the |annot|. Returns -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_AddInkStroke(FPDF_ANNOTATION annot,const FS_POINTF * points,size_t point_count);
//  Experimental API.
//  Removes an InkList in |annot|.
//  This API works only for ink annotations.
//    annot  - handle to an annotation.
//  Return true on successful removal of /InkList entry from context of the
//  non-null ink |annot|. Returns false on failure.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_RemoveInkList(FPDF_ANNOTATION annot);
//  Experimental API.
//  Add |obj| to |annot|. |obj| must have been created by
//  FPDFPageObj_CreateNew{Path|Rect}() or FPDFPageObj_New{Text|Image}Obj(), and
//  will be owned by |annot|. Note that an |obj| cannot belong to more than one
//  |annot|. Currently, only ink and stamp annotations are supported by this API.
//  Also note that only path, image, and text objects have APIs for creation.
//    annot  - handle to an annotation.
//    obj    - handle to the object that is to be added to |annot|.
//  Return true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_AppendObject(FPDF_ANNOTATION annot,FPDF_PAGEOBJECT obj);
//  Experimental API.
//  Get the total number of objects in |annot|, including path objects, text
//  objects, external objects, image objects, and shading objects.
//    annot  - handle to an annotation.
//  Returns the number of objects in |annot|.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetObjectCount(FPDF_ANNOTATION annot);
//  Experimental API.
//  Get the object in |annot| at |index|.
//    annot  - handle to an annotation.
//    index  - the index of the object.
//  Return a handle to the object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFAnnot_GetObject(FPDF_ANNOTATION annot,int index);
//  Experimental API.
//  Remove the object in |annot| at |index|.
//    annot  - handle to an annotation.
//    index  - the index of the object to be removed.
//  Return true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_RemoveObject(FPDF_ANNOTATION annot,int index);
//  Experimental API.
//  Set the color of an annotation. Fails when called on annotations with
//  appearance streams already defined; instead use
//  FPDFPageObj_Set{Stroke|Fill}Color().
//    annot    - handle to an annotation.
//    type     - type of the color to be set.
//    R, G, B  - buffer to hold the RGB value of the color. Ranges from 0 to 255.
//    A        - buffer to hold the opacity. Ranges from 0 to 255.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetColor(FPDF_ANNOTATION annot,FPDFANNOT_COLORTYPE type,unsigned int R,unsigned int G,unsigned int B,unsigned int A);
//  Experimental API.
//  Get the color of an annotation. If no color is specified, default to yellow
//  for highlight annotation, black for all else. Fails when called on
//  annotations with appearance streams already defined; instead use
//  FPDFPageObj_Get{Stroke|Fill}Color().
//    annot    - handle to an annotation.
//    type     - type of the color requested.
//    R, G, B  - buffer to hold the RGB value of the color. Ranges from 0 to 255.
//    A        - buffer to hold the opacity. Ranges from 0 to 255.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetColor(FPDF_ANNOTATION annot,FPDFANNOT_COLORTYPE type,unsigned int * R,unsigned int * G,unsigned int * B,unsigned int * A);
//  Experimental API.
//  Check if the annotation is of a type that has attachment points
//  (i.e. quadpoints). Quadpoints are the vertices of the rectangle that
//  encompasses the texts affected by the annotation. They provide the
//  coordinates in the page where the annotation is attached. Only text markup
//  annotations (i.e. highlight, strikeout, squiggly, and underline) and link
//  annotations have quadpoints.
//    annot  - handle to an annotation.
//  Returns true if the annotation is of a type that has quadpoints, false
//  otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_HasAttachmentPoints(FPDF_ANNOTATION annot);
//  Experimental API.
//  Replace the attachment points (i.e. quadpoints) set of an annotation at
//  |quad_index|. This index needs to be within the result of
//  FPDFAnnot_CountAttachmentPoints().
//  If the annotation's appearance stream is defined and this annotation is of a
//  type with quadpoints, then update the bounding box too if the new quadpoints
//  define a bigger one.
//    annot       - handle to an annotation.
//    quad_index  - index of the set of quadpoints.
//    quad_points - the quadpoints to be set.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetAttachmentPoints(FPDF_ANNOTATION annot,size_t quad_index,const FS_QUADPOINTSF * quad_points);
//  Experimental API.
//  Append to the list of attachment points (i.e. quadpoints) of an annotation.
//  If the annotation's appearance stream is defined and this annotation is of a
//  type with quadpoints, then update the bounding box too if the new quadpoints
//  define a bigger one.
//    annot       - handle to an annotation.
//    quad_points - the quadpoints to be set.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_AppendAttachmentPoints(FPDF_ANNOTATION annot,const FS_QUADPOINTSF * quad_points);
//  Experimental API.
//  Get the number of sets of quadpoints of an annotation.
//    annot  - handle to an annotation.
//  Returns the number of sets of quadpoints, or 0 on failure.
FFI_PLUGIN_EXPORT size_t PDFIUM_FPDFAnnot_CountAttachmentPoints(FPDF_ANNOTATION annot);
//  Experimental API.
//  Get the attachment points (i.e. quadpoints) of an annotation.
//    annot       - handle to an annotation.
//    quad_index  - index of the set of quadpoints.
//    quad_points - receives the quadpoints; must not be NULL.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetAttachmentPoints(FPDF_ANNOTATION annot,size_t quad_index,FS_QUADPOINTSF * quad_points);
//  Experimental API.
//  Set the annotation rectangle defining the location of the annotation. If the
//  annotation's appearance stream is defined and this annotation is of a type
//  without quadpoints, then update the bounding box too if the new rectangle
//  defines a bigger one.
//    annot  - handle to an annotation.
//    rect   - the annotation rectangle to be set.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetRect(FPDF_ANNOTATION annot,const FS_RECTF * rect);
//  Experimental API.
//  Get the annotation rectangle defining the location of the annotation.
//    annot  - handle to an annotation.
//    rect   - receives the rectangle; must not be NULL.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetRect(FPDF_ANNOTATION annot,FS_RECTF * rect);
//  Experimental API.
//  Get the vertices of a polygon or polyline annotation. |buffer| is an array of
//  points of the annotation. If |length| is less than the returned length, or
//  |annot| or |buffer| is NULL, |buffer| will not be modified.
//    annot  - handle to an annotation, as returned by e.g. FPDFPage_GetAnnot()
//    buffer - buffer for holding the points.
//    length - length of the buffer in points.
//  Returns the number of points if the annotation is of type polygon or
//  polyline, 0 otherwise.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetVertices(FPDF_ANNOTATION annot,FS_POINTF * buffer,unsigned long length);
//  Experimental API.
//  Get the number of paths in the ink list of an ink annotation.
//    annot  - handle to an annotation, as returned by e.g. FPDFPage_GetAnnot()
//  Returns the number of paths in the ink list if the annotation is of type ink,
//  0 otherwise.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetInkListCount(FPDF_ANNOTATION annot);
//  Experimental API.
//  Get a path in the ink list of an ink annotation. |buffer| is an array of
//  points of the path. If |length| is less than the returned length, or |annot|
//  or |buffer| is NULL, |buffer| will not be modified.
//    annot  - handle to an annotation, as returned by e.g. FPDFPage_GetAnnot()
//    path_index - index of the path
//    buffer - buffer for holding the points.
//    length - length of the buffer in points.
//  Returns the number of points of the path if the annotation is of type ink, 0
//  otherwise.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetInkListPath(FPDF_ANNOTATION annot,unsigned long path_index,FS_POINTF * buffer,unsigned long length);
//  Experimental API.
//  Get the starting and ending coordinates of a line annotation.
//    annot  - handle to an annotation, as returned by e.g. FPDFPage_GetAnnot()
//    start - starting point
//    end - ending point
//  Returns true if the annotation is of type line, |start| and |end| are not
//  NULL, false otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetLine(FPDF_ANNOTATION annot,FS_POINTF * start,FS_POINTF * end);
//  Experimental API.
//  Set the characteristics of the annotation's border (rounded rectangle).
//    annot              - handle to an annotation
//    horizontal_radius  - horizontal corner radius, in default user space units
//    vertical_radius    - vertical corner radius, in default user space units
//    border_width       - border width, in default user space units
//  Returns true if setting the border for |annot| succeeds, false otherwise.
//  If |annot| contains an appearance stream that overrides the border values,
//  then the appearance stream will be removed on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetBorder(FPDF_ANNOTATION annot,float horizontal_radius,float vertical_radius,float border_width);
//  Experimental API.
//  Get the characteristics of the annotation's border (rounded rectangle).
//    annot              - handle to an annotation
//    horizontal_radius  - horizontal corner radius, in default user space units
//    vertical_radius    - vertical corner radius, in default user space units
//    border_width       - border width, in default user space units
//  Returns true if |horizontal_radius|, |vertical_radius| and |border_width| are
//  not NULL, false otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetBorder(FPDF_ANNOTATION annot,float * horizontal_radius,float * vertical_radius,float * border_width);
//  Experimental API.
//  Get the JavaScript of an event of the annotation's additional actions.
//  |buffer| is only modified if |buflen| is large enough to hold the whole
//  JavaScript string. If |buflen| is smaller, the total size of the JavaScript
//  is still returned, but nothing is copied.  If there is no JavaScript for
//  |event| in |annot|, an empty string is written to |buf| and 2 is returned,
//  denoting the size of the null terminator in the buffer.  On other errors,
//  nothing is written to |buffer| and 0 is returned.
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//     event       -   event type, one of the FPDF_ANNOT_AACTION_* values.
//     buffer      -   buffer for holding the value string, encoded in UTF-16LE.
//     buflen      -   length of the buffer in bytes.
//  Returns the length of the string value in bytes, including the 2-byte
//  null terminator.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetFormAdditionalActionJavaScript(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,int event,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Check if |annot|'s dictionary has |key| as a key.
//    annot  - handle to an annotation.
//    key    - the key to look for, encoded in UTF-8.
//  Returns true if |key| exists.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_HasKey(FPDF_ANNOTATION annot,FPDF_BYTESTRING key);
//  Experimental API.
//  Get the type of the value corresponding to |key| in |annot|'s dictionary.
//    annot  - handle to an annotation.
//    key    - the key to look for, encoded in UTF-8.
//  Returns the type of the dictionary value.
FFI_PLUGIN_EXPORT FPDF_OBJECT_TYPE PDFIUM_FPDFAnnot_GetValueType(FPDF_ANNOTATION annot,FPDF_BYTESTRING key);
//  Experimental API.
//  Set the string value corresponding to |key| in |annot|'s dictionary,
//  overwriting the existing value if any. The value type would be
//  FPDF_OBJECT_STRING after this function call succeeds.
//    annot  - handle to an annotation.
//    key    - the key to the dictionary entry to be set, encoded in UTF-8.
//    value  - the string value to be set, encoded in UTF-16LE.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetStringValue(FPDF_ANNOTATION annot,FPDF_BYTESTRING key,FPDF_WIDESTRING value);
//  Experimental API.
//  Get the string value corresponding to |key| in |annot|'s dictionary. |buffer|
//  is only modified if |buflen| is longer than the length of contents. Note that
//  if |key| does not exist in the dictionary or if |key|'s corresponding value
//  in the dictionary is not a string (i.e. the value is not of type
//  FPDF_OBJECT_STRING or FPDF_OBJECT_NAME), then an empty string would be copied
//  to |buffer| and the return value would be 2. On other errors, nothing would
//  be added to |buffer| and the return value would be 0.
//    annot  - handle to an annotation.
//    key    - the key to the requested dictionary entry, encoded in UTF-8.
//    buffer - buffer for holding the value string, encoded in UTF-16LE.
//    buflen - length of the buffer in bytes.
//  Returns the length of the string value in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetStringValue(FPDF_ANNOTATION annot,FPDF_BYTESTRING key,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Get the float value corresponding to |key| in |annot|'s dictionary. Writes
//  value to |value| and returns True if |key| exists in the dictionary and
//  |key|'s corresponding value is a number (FPDF_OBJECT_NUMBER), False
//  otherwise.
//    annot  - handle to an annotation.
//    key    - the key to the requested dictionary entry, encoded in UTF-8.
//    value  - receives the value, must not be NULL.
//  Returns True if value found, False otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetNumberValue(FPDF_ANNOTATION annot,FPDF_BYTESTRING key,float * value);
//  Experimental API.
//  Set the AP (appearance string) in |annot|'s dictionary for a given
//  |appearanceMode|.
//    annot          - handle to an annotation.
//    appearanceMode - the appearance mode (normal, rollover or down) for which
//                     to get the AP.
//    value          - the string value to be set, encoded in UTF-16LE. If
//                     nullptr is passed, the AP is cleared for that mode. If the
//                     mode is Normal, APs for all modes are cleared.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetAP(FPDF_ANNOTATION annot,FPDF_ANNOT_APPEARANCEMODE appearanceMode,FPDF_WIDESTRING value);
//  Experimental API.
//  Get the AP (appearance string) from |annot|'s dictionary for a given
//  |appearanceMode|.
//  |buffer| is only modified if |buflen| is large enough to hold the whole AP
//  string. If |buflen| is smaller, the total size of the AP is still returned,
//  but nothing is copied.
//  If there is no appearance stream for |annot| in |appearanceMode|, an empty
//  string is written to |buf| and 2 is returned.
//  On other errors, nothing is written to |buffer| and 0 is returned.
//    annot          - handle to an annotation.
//    appearanceMode - the appearance mode (normal, rollover or down) for which
//                     to get the AP.
//    buffer         - buffer for holding the value string, encoded in UTF-16LE.
//    buflen         - length of the buffer in bytes.
//  Returns the length of the string value in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetAP(FPDF_ANNOTATION annot,FPDF_ANNOT_APPEARANCEMODE appearanceMode,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Get the annotation corresponding to |key| in |annot|'s dictionary. Common
//  keys for linking annotations include "IRT" and "Popup". Must call
//  FPDFPage_CloseAnnot() when the annotation returned by this function is no
//  longer needed.
//    annot  - handle to an annotation.
//    key    - the key to the requested dictionary entry, encoded in UTF-8.
//  Returns a handle to the linked annotation object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ANNOTATION PDFIUM_FPDFAnnot_GetLinkedAnnot(FPDF_ANNOTATION annot,FPDF_BYTESTRING key);
//  Experimental API.
//  Get the annotation flags of |annot|.
//    annot    - handle to an annotation.
//  Returns the annotation flags.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetFlags(FPDF_ANNOTATION annot);
//  Experimental API.
//  Set the |annot|'s flags to be of the value |flags|.
//    annot      - handle to an annotation.
//    flags      - the flag values to be set.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetFlags(FPDF_ANNOTATION annot,int flags);
//  Experimental API.
//  Get the annotation flags of |annot|.
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//  Returns the annotation flags specific to interactive forms.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetFormFieldFlags(FPDF_FORMHANDLE handle,FPDF_ANNOTATION annot);
//  Experimental API.
//  Sets the form field flags for an interactive form annotation.
//    handle       -   the handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//    annot        -   handle to an interactive form annotation.
//    flags        -   the form field flags to be set.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetFormFieldFlags(FPDF_FORMHANDLE handle,FPDF_ANNOTATION annot,int flags);
//  Experimental API.
//  Retrieves an interactive form annotation whose rectangle contains a given
//  point on a page. Must call FPDFPage_CloseAnnot() when the annotation returned
//  is no longer needed.
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     page        -   handle to the page, returned by FPDF_LoadPage function.
//     point       -   position in PDF "user space".
//  Returns the interactive form annotation whose rectangle contains the given
//  coordinates on the page. If there is no such annotation, return NULL.
FFI_PLUGIN_EXPORT FPDF_ANNOTATION PDFIUM_FPDFAnnot_GetFormFieldAtPoint(FPDF_FORMHANDLE hHandle,FPDF_PAGE page,const FS_POINTF * point);
//  Experimental API.
//  Gets the name of |annot|, which is an interactive form annotation.
//  |buffer| is only modified if |buflen| is longer than the length of contents.
//  In case of error, nothing will be added to |buffer| and the return value will
//  be 0. Note that return value of empty string is 2 for "\0\0".
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//     buffer      -   buffer for holding the name string, encoded in UTF-16LE.
//     buflen      -   length of the buffer in bytes.
//  Returns the length of the string value in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetFormFieldName(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Gets the alternate name of |annot|, which is an interactive form annotation.
//  |buffer| is only modified if |buflen| is longer than the length of contents.
//  In case of error, nothing will be added to |buffer| and the return value will
//  be 0. Note that return value of empty string is 2 for "\0\0".
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//     buffer      -   buffer for holding the alternate name string, encoded in
//                     UTF-16LE.
//     buflen      -   length of the buffer in bytes.
//  Returns the length of the string value in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetFormFieldAlternateName(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Gets the form field type of |annot|, which is an interactive form annotation.
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//  Returns the type of the form field (one of the FPDF_FORMFIELD_* values) on
//  success. Returns -1 on error.
//  See field types in fpdf_formfill.h.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetFormFieldType(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot);
//  Experimental API.
//  Gets the value of |annot|, which is an interactive form annotation.
//  |buffer| is only modified if |buflen| is longer than the length of contents.
//  In case of error, nothing will be added to |buffer| and the return value will
//  be 0. Note that return value of empty string is 2 for "\0\0".
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//     buffer      -   buffer for holding the value string, encoded in UTF-16LE.
//     buflen      -   length of the buffer in bytes.
//  Returns the length of the string value in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetFormFieldValue(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Get the number of options in the |annot|'s "Opt" dictionary. Intended for
//  use with listbox and combobox widget annotations.
//    hHandle - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//  Returns the number of options in "Opt" dictionary on success. Return value
//  will be -1 if annotation does not have an "Opt" dictionary or other error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetOptionCount(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot);
//  Experimental API.
//  Get the string value for the label of the option at |index| in |annot|'s
//  "Opt" dictionary. Intended for use with listbox and combobox widget
//  annotations. |buffer| is only modified if |buflen| is longer than the length
//  of contents. If index is out of range or in case of other error, nothing
//  will be added to |buffer| and the return value will be 0. Note that
//  return value of empty string is 2 for "\0\0".
//    hHandle - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//    index   - numeric index of the option in the "Opt" array
//    buffer  - buffer for holding the value string, encoded in UTF-16LE.
//    buflen  - length of the buffer in bytes.
//  Returns the length of the string value in bytes.
//  If |annot| does not have an "Opt" array, |index| is out of range or if any
//  other error occurs, returns 0.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetOptionLabel(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,int index,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Determine whether or not the option at |index| in |annot|'s "Opt" dictionary
//  is selected. Intended for use with listbox and combobox widget annotations.
//    handle  - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//    index   - numeric index of the option in the "Opt" array.
//  Returns true if the option at |index| in |annot|'s "Opt" dictionary is
//  selected, false otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_IsOptionSelected(FPDF_FORMHANDLE handle,FPDF_ANNOTATION annot,int index);
//  Experimental API.
//  Get the float value of the font size for an |annot| with variable text.
//  If 0, the font is to be auto-sized: its size is computed as a function of
//  the height of the annotation rectangle.
//    hHandle - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//    value   - Required. Float which will be set to font size on success.
//  Returns true if the font size was set in |value|, false on error or if
//  |value| not provided.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetFontSize(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,float * value);
//  Experimental API.
//  Set the text color of an annotation.
//    handle   - handle to the form fill module, returned by
//               FPDFDOC_InitFormFillEnvironment.
//    annot    - handle to an annotation.
//    R        - the red component for the text color.
//    G        - the green component for the text color.
//    B        - the blue component for the text color.
//  Returns true if successful.
//  Currently supported subtypes: freetext.
//  The range for the color components is 0 to 255.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetFontColor(FPDF_FORMHANDLE handle,FPDF_ANNOTATION annot,unsigned int R,unsigned int G,unsigned int B);
//  Experimental API.
//  Get the RGB value of the font color for an |annot| with variable text.
//    hHandle  - handle to the form fill module, returned by
//               FPDFDOC_InitFormFillEnvironment.
//    annot    - handle to an annotation.
//    R, G, B  - buffer to hold the RGB value of the color. Ranges from 0 to 255.
//  Returns true if the font color was set, false on error or if the font
//  color was not provided.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetFontColor(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,unsigned int * R,unsigned int * G,unsigned int * B);
//  Experimental API.
//  Determine if |annot| is a form widget that is checked. Intended for use with
//  checkbox and radio button widgets.
//    hHandle - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//  Returns true if |annot| is a form widget and is checked, false otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_IsChecked(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot);
//  Experimental API.
//  Set the list of focusable annotation subtypes. Annotations of subtype
//  FPDF_ANNOT_WIDGET are by default focusable. New subtypes set using this API
//  will override the existing subtypes.
//    hHandle  - handle to the form fill module, returned by
//               FPDFDOC_InitFormFillEnvironment.
//    subtypes - list of annotation subtype which can be tabbed over.
//    count    - total number of annotation subtype in list.
//  Returns true if list of annotation subtype is set successfully, false
//  otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetFocusableSubtypes(FPDF_FORMHANDLE hHandle,const FPDF_ANNOTATION_SUBTYPE * subtypes,size_t count);
//  Experimental API.
//  Get the count of focusable annotation subtypes as set by host
//  for a |hHandle|.
//    hHandle  - handle to the form fill module, returned by
//               FPDFDOC_InitFormFillEnvironment.
//  Returns the count of focusable annotation subtypes or -1 on error.
//  Note : Annotations of type FPDF_ANNOT_WIDGET are by default focusable.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetFocusableSubtypesCount(FPDF_FORMHANDLE hHandle);
//  Experimental API.
//  Get the list of focusable annotation subtype as set by host.
//    hHandle  - handle to the form fill module, returned by
//               FPDFDOC_InitFormFillEnvironment.
//    subtypes - receives the list of annotation subtype which can be tabbed
//               over. Caller must have allocated |subtypes| more than or
//               equal to the count obtained from
//               FPDFAnnot_GetFocusableSubtypesCount() API.
//    count    - size of |subtypes|.
//  Returns true on success and set list of annotation subtype to |subtypes|,
//  false otherwise.
//  Note : Annotations of type FPDF_ANNOT_WIDGET are by default focusable.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_GetFocusableSubtypes(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION_SUBTYPE * subtypes,size_t count);
//  Experimental API.
//  Gets FPDF_LINK object for |annot|. Intended to use for link annotations.
//    annot   - handle to an annotation.
//  Returns FPDF_LINK from the FPDF_ANNOTATION and NULL on failure,
//  if the input annot is NULL or input annot's subtype is not link.
FFI_PLUGIN_EXPORT FPDF_LINK PDFIUM_FPDFAnnot_GetLink(FPDF_ANNOTATION annot);
//  Experimental API.
//  Gets the count of annotations in the |annot|'s control group.
//  A group of interactive form annotations is collectively called a form
//  control group. Here, |annot|, an interactive form annotation, should be
//  either a radio button or a checkbox.
//    hHandle - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//  Returns number of controls in its control group or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetFormControlCount(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot);
//  Experimental API.
//  Gets the index of |annot| in |annot|'s control group.
//  A group of interactive form annotations is collectively called a form
//  control group. Here, |annot|, an interactive form annotation, should be
//  either a radio button or a checkbox.
//    hHandle - handle to the form fill module, returned by
//              FPDFDOC_InitFormFillEnvironment.
//    annot   - handle to an annotation.
//  Returns index of a given |annot| in its control group or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAnnot_GetFormControlIndex(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot);
//  Experimental API.
//  Gets the export value of |annot| which is an interactive form annotation.
//  Intended for use with radio button and checkbox widget annotations.
//  |buffer| is only modified if |buflen| is longer than the length of contents.
//  In case of error, nothing will be added to |buffer| and the return value
//  will be 0. Note that return value of empty string is 2 for "\0\0".
//     hHandle     -   handle to the form fill module, returned by
//                     FPDFDOC_InitFormFillEnvironment().
//     annot       -   handle to an interactive form annotation.
//     buffer      -   buffer for holding the value string, encoded in UTF-16LE.
//     buflen      -   length of the buffer in bytes.
//  Returns the length of the string value in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAnnot_GetFormFieldExportValue(FPDF_FORMHANDLE hHandle,FPDF_ANNOTATION annot,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Add a URI action to |annot|, overwriting the existing action, if any.
//    annot  - handle to a link annotation.
//    uri    - the URI to be set, encoded in 7-bit ASCII.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAnnot_SetURI(FPDF_ANNOTATION annot,const char * uri);
//  Experimental API.
//  Get the attachment from |annot|.
//    annot - handle to a file annotation.
//  Returns the handle to the attachment object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ATTACHMENT PDFIUM_FPDFAnnot_GetFileAttachment(FPDF_ANNOTATION annot);
//  Experimental API.
//  Add an embedded file with |name| to |annot|.
//    annot    - handle to a file annotation.
//    name     - name of the new attachment.
//  Returns a handle to the new attachment object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ATTACHMENT PDFIUM_FPDFAnnot_AddFileAttachment(FPDF_ANNOTATION annot,FPDF_WIDESTRING name);
#include "pdfium/fpdf_flatten.h"
//  Flatten annotations and form fields into the page contents.
//    page  - handle to the page.
//    nFlag - One of the |FLAT_*| values denoting the page usage.
//  Returns one of the |FLATTEN_*| values.
//  Currently, all failures return |FLATTEN_FAIL| with no indication of the
//  cause.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_Flatten(FPDF_PAGE page,int nFlag);
#include "pdfium/fpdf_searchex.h"
//  Get the character index in |text_page| internal character list.
//    text_page  - a text page information structure.
//    nTextIndex - index of the text returned from FPDFText_GetText().
//  Returns the index of the character in internal character list. -1 for error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetCharIndexFromTextIndex(FPDF_TEXTPAGE text_page,int nTextIndex);
//  Get the text index in |text_page| internal character list.
//    text_page  - a text page information structure.
//    nCharIndex - index of the character in internal character list.
//  Returns the index of the text returned from FPDFText_GetText(). -1 for error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetTextIndexFromCharIndex(FPDF_TEXTPAGE text_page,int nCharIndex);
#include "pdfium/fpdf_save.h"
//  Function: FPDF_SaveAsCopy
//           Saves the copy of specified document in custom way.
//  Parameters:
//           document        -   Handle to document, as returned by
//                               FPDF_LoadDocument() or FPDF_CreateNewDocument().
//           pFileWrite      -   A pointer to a custom file write structure.
//           flags           -   Flags above that affect how the PDF gets saved.
//                               Pass in 0 when there are no flags.
//  Return value:
//           TRUE for succeed, FALSE for failed.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_SaveAsCopy(FPDF_DOCUMENT document,FPDF_FILEWRITE * pFileWrite,FPDF_DWORD flags);
//  Function: FPDF_SaveWithVersion
//           Same as FPDF_SaveAsCopy(), except the file version of the
//           saved document can be specified by the caller.
//  Parameters:
//           document        -   Handle to document.
//           pFileWrite      -   A pointer to a custom file write structure.
//           flags           -   The creating flags.
//           fileVersion     -   The PDF file version. File version: 14 for 1.4,
//                               15 for 1.5, ...
//  Return value:
//           TRUE if succeed, FALSE if failed.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_SaveWithVersion(FPDF_DOCUMENT document,FPDF_FILEWRITE * pFileWrite,FPDF_DWORD flags,int fileVersion);
#include "pdfium/fpdf_doc.h"
//  Get the first child of |bookmark|, or the first top-level bookmark item.
//    document - handle to the document.
//    bookmark - handle to the current bookmark. Pass NULL for the first top
//               level item.
//  Returns a handle to the first child of |bookmark| or the first top-level
//  bookmark item. NULL if no child or top-level bookmark found.
//  Note that another name for the bookmarks is the document outline, as
//  described in ISO 32000-1:2008, section 12.3.3.
FFI_PLUGIN_EXPORT FPDF_BOOKMARK PDFIUM_FPDFBookmark_GetFirstChild(FPDF_DOCUMENT document,FPDF_BOOKMARK bookmark);
//  Get the next sibling of |bookmark|.
//    document - handle to the document.
//    bookmark - handle to the current bookmark.
//  Returns a handle to the next sibling of |bookmark|, or NULL if this is the
//  last bookmark at this level.
//  Note that the caller is responsible for handling circular bookmark
//  references, as may arise from malformed documents.
FFI_PLUGIN_EXPORT FPDF_BOOKMARK PDFIUM_FPDFBookmark_GetNextSibling(FPDF_DOCUMENT document,FPDF_BOOKMARK bookmark);
//  Get the title of |bookmark|.
//    bookmark - handle to the bookmark.
//    buffer   - buffer for the title. May be NULL.
//    buflen   - the length of the buffer in bytes. May be 0.
//  Returns the number of bytes in the title, including the terminating NUL
//  character. The number of bytes is returned regardless of the |buffer| and
//  |buflen| parameters.
//  Regardless of the platform, the |buffer| is always in UTF-16LE encoding. The
//  string is terminated by a UTF16 NUL character. If |buflen| is less than the
//  required length, or |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFBookmark_GetTitle(FPDF_BOOKMARK bookmark,void * buffer,unsigned long buflen);
//  Experimental API.
//  Get the number of chlidren of |bookmark|.
//    bookmark - handle to the bookmark.
//  Returns a signed integer that represents the number of sub-items the given
//  bookmark has. If the value is positive, child items shall be shown by default
//  (open state). If the value is negative, child items shall be hidden by
//  default (closed state). Please refer to PDF 32000-1:2008, Table 153.
//  Returns 0 if the bookmark has no children or is invalid.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFBookmark_GetCount(FPDF_BOOKMARK bookmark);
//  Find the bookmark with |title| in |document|.
//    document - handle to the document.
//    title    - the UTF-16LE encoded Unicode title for which to search.
//  Returns the handle to the bookmark, or NULL if |title| can't be found.
//  FPDFBookmark_Find() will always return the first bookmark found even if
//  multiple bookmarks have the same |title|.
FFI_PLUGIN_EXPORT FPDF_BOOKMARK PDFIUM_FPDFBookmark_Find(FPDF_DOCUMENT document,FPDF_WIDESTRING title);
//  Get the destination associated with |bookmark|.
//    document - handle to the document.
//    bookmark - handle to the bookmark.
//  Returns the handle to the destination data, or NULL if no destination is
//  associated with |bookmark|.
FFI_PLUGIN_EXPORT FPDF_DEST PDFIUM_FPDFBookmark_GetDest(FPDF_DOCUMENT document,FPDF_BOOKMARK bookmark);
//  Get the action associated with |bookmark|.
//    bookmark - handle to the bookmark.
//  Returns the handle to the action data, or NULL if no action is associated
//  with |bookmark|.
//  If this function returns a valid handle, it is valid as long as |bookmark| is
//  valid.
//  If this function returns NULL, FPDFBookmark_GetDest() should be called to get
//  the |bookmark| destination data.
FFI_PLUGIN_EXPORT FPDF_ACTION PDFIUM_FPDFBookmark_GetAction(FPDF_BOOKMARK bookmark);
//  Get the type of |action|.
//    action - handle to the action.
//  Returns one of:
//    PDFACTION_UNSUPPORTED
//    PDFACTION_GOTO
//    PDFACTION_REMOTEGOTO
//    PDFACTION_URI
//    PDFACTION_LAUNCH
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAction_GetType(FPDF_ACTION action);
//  Get the destination of |action|.
//    document - handle to the document.
//    action   - handle to the action. |action| must be a |PDFACTION_GOTO| or
//               |PDFACTION_REMOTEGOTO|.
//  Returns a handle to the destination data, or NULL on error, typically
//  because the arguments were bad or the action was of the wrong type.
//  In the case of |PDFACTION_REMOTEGOTO|, you must first call
//  FPDFAction_GetFilePath(), then load the document at that path, then pass
//  the document handle from that document as |document| to FPDFAction_GetDest().
FFI_PLUGIN_EXPORT FPDF_DEST PDFIUM_FPDFAction_GetDest(FPDF_DOCUMENT document,FPDF_ACTION action);
//  Get the file path of |action|.
//    action - handle to the action. |action| must be a |PDFACTION_LAUNCH| or
//             |PDFACTION_REMOTEGOTO|.
//    buffer - a buffer for output the path string. May be NULL.
//    buflen - the length of the buffer, in bytes. May be 0.
//  Returns the number of bytes in the file path, including the trailing NUL
//  character, or 0 on error, typically because the arguments were bad or the
//  action was of the wrong type.
//  Regardless of the platform, the |buffer| is always in UTF-8 encoding.
//  If |buflen| is less than the returned length, or |buffer| is NULL, |buffer|
//  will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAction_GetFilePath(FPDF_ACTION action,void * buffer,unsigned long buflen);
//  Get the URI path of |action|.
//    document - handle to the document.
//    action   - handle to the action. Must be a |PDFACTION_URI|.
//    buffer   - a buffer for the path string. May be NULL.
//    buflen   - the length of the buffer, in bytes. May be 0.
//  Returns the number of bytes in the URI path, including the trailing NUL
//  character, or 0 on error, typically because the arguments were bad or the
//  action was of the wrong type.
//  The |buffer| may contain badly encoded data. The caller should validate the
//  output. e.g. Check to see if it is UTF-8.
//  If |buflen| is less than the returned length, or |buffer| is NULL, |buffer|
//  will not be modified.
//  Historically, the documentation for this API claimed |buffer| is always
//  encoded in 7-bit ASCII, but did not actually enforce it.
//  https://pdfium.googlesource.com/pdfium.git/+/d609e84cee2e14a18333247485af91df48a40592
//  added that enforcement, but that did not work well for real world PDFs that
//  used UTF-8. As of this writing, this API reverted back to its original
//  behavior prior to commit d609e84cee.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAction_GetURIPath(FPDF_DOCUMENT document,FPDF_ACTION action,void * buffer,unsigned long buflen);
//  Get the page index of |dest|.
//    document - handle to the document.
//    dest     - handle to the destination.
//  Returns the 0-based page index containing |dest|. Returns -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFDest_GetDestPageIndex(FPDF_DOCUMENT document,FPDF_DEST dest);
//  Experimental API.
//  Get the view (fit type) specified by |dest|.
//    dest         - handle to the destination.
//    pNumParams   - receives the number of view parameters, which is at most 4.
//    pParams      - buffer to write the view parameters. Must be at least 4
//                   FS_FLOATs long.
//  Returns one of the PDFDEST_VIEW_* constants, PDFDEST_VIEW_UNKNOWN_MODE if
//  |dest| does not specify a view.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFDest_GetView(FPDF_DEST dest,unsigned long * pNumParams,FS_FLOAT * pParams);
//  Get the (x, y, zoom) location of |dest| in the destination page, if the
//  destination is in [page /XYZ x y zoom] syntax.
//    dest       - handle to the destination.
//    hasXVal    - out parameter; true if the x value is not null
//    hasYVal    - out parameter; true if the y value is not null
//    hasZoomVal - out parameter; true if the zoom value is not null
//    x          - out parameter; the x coordinate, in page coordinates.
//    y          - out parameter; the y coordinate, in page coordinates.
//    zoom       - out parameter; the zoom value.
//  Returns TRUE on successfully reading the /XYZ value.
//  Note the [x, y, zoom] values are only set if the corresponding hasXVal,
//  hasYVal or hasZoomVal flags are true.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFDest_GetLocationInPage(FPDF_DEST dest,FPDF_BOOL * hasXVal,FPDF_BOOL * hasYVal,FPDF_BOOL * hasZoomVal,FS_FLOAT * x,FS_FLOAT * y,FS_FLOAT * zoom);
//  Find a link at point (|x|,|y|) on |page|.
//    page - handle to the document page.
//    x    - the x coordinate, in the page coordinate system.
//    y    - the y coordinate, in the page coordinate system.
//  Returns a handle to the link, or NULL if no link found at the given point.
//  You can convert coordinates from screen coordinates to page coordinates using
//  FPDF_DeviceToPage().
FFI_PLUGIN_EXPORT FPDF_LINK PDFIUM_FPDFLink_GetLinkAtPoint(FPDF_PAGE page,double x,double y);
//  Find the Z-order of link at point (|x|,|y|) on |page|.
//    page - handle to the document page.
//    x    - the x coordinate, in the page coordinate system.
//    y    - the y coordinate, in the page coordinate system.
//  Returns the Z-order of the link, or -1 if no link found at the given point.
//  Larger Z-order numbers are closer to the front.
//  You can convert coordinates from screen coordinates to page coordinates using
//  FPDF_DeviceToPage().
FFI_PLUGIN_EXPORT int PDFIUM_FPDFLink_GetLinkZOrderAtPoint(FPDF_PAGE page,double x,double y);
//  Get destination info for |link|.
//    document - handle to the document.
//    link     - handle to the link.
//  Returns a handle to the destination, or NULL if there is no destination
//  associated with the link. In this case, you should call FPDFLink_GetAction()
//  to retrieve the action associated with |link|.
FFI_PLUGIN_EXPORT FPDF_DEST PDFIUM_FPDFLink_GetDest(FPDF_DOCUMENT document,FPDF_LINK link);
//  Get action info for |link|.
//    link - handle to the link.
//  Returns a handle to the action associated to |link|, or NULL if no action.
//  If this function returns a valid handle, it is valid as long as |link| is
//  valid.
FFI_PLUGIN_EXPORT FPDF_ACTION PDFIUM_FPDFLink_GetAction(FPDF_LINK link);
//  Enumerates all the link annotations in |page|.
//    page       - handle to the page.
//    start_pos  - the start position, should initially be 0 and is updated with
//                 the next start position on return.
//    link_annot - the link handle for |startPos|.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFLink_Enumerate(FPDF_PAGE page,int * start_pos,FPDF_LINK * link_annot);
//  Experimental API.
//  Gets FPDF_ANNOTATION object for |link_annot|.
//    page       - handle to the page in which FPDF_LINK object is present.
//    link_annot - handle to link annotation.
//  Returns FPDF_ANNOTATION from the FPDF_LINK and NULL on failure,
//  if the input link annot or page is NULL.
FFI_PLUGIN_EXPORT FPDF_ANNOTATION PDFIUM_FPDFLink_GetAnnot(FPDF_PAGE page,FPDF_LINK link_annot);
//  Get the rectangle for |link_annot|.
//    link_annot - handle to the link annotation.
//    rect       - the annotation rectangle.
//  Returns true on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFLink_GetAnnotRect(FPDF_LINK link_annot,FS_RECTF * rect);
//  Get the count of quadrilateral points to the |link_annot|.
//    link_annot - handle to the link annotation.
//  Returns the count of quadrilateral points.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFLink_CountQuadPoints(FPDF_LINK link_annot);
//  Get the quadrilateral points for the specified |quad_index| in |link_annot|.
//    link_annot  - handle to the link annotation.
//    quad_index  - the specified quad point index.
//    quad_points - receives the quadrilateral points.
//  Returns true on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFLink_GetQuadPoints(FPDF_LINK link_annot,int quad_index,FS_QUADPOINTSF * quad_points);
//  Experimental API
//  Gets an additional-action from |page|.
//    page      - handle to the page, as returned by FPDF_LoadPage().
//    aa_type   - the type of the page object's addtional-action, defined
//                in public/fpdf_formfill.h
//    Returns the handle to the action data, or NULL if there is no
//    additional-action of type |aa_type|.
//    If this function returns a valid handle, it is valid as long as |page| is
//    valid.
FFI_PLUGIN_EXPORT FPDF_ACTION PDFIUM_FPDF_GetPageAAction(FPDF_PAGE page,int aa_type);
//  Experimental API.
//  Get the file identifer defined in the trailer of |document|.
//    document - handle to the document.
//    id_type  - the file identifier type to retrieve.
//    buffer   - a buffer for the file identifier. May be NULL.
//    buflen   - the length of the buffer, in bytes. May be 0.
//  Returns the number of bytes in the file identifier, including the NUL
//  terminator.
//  The |buffer| is always a byte string. The |buffer| is followed by a NUL
//  terminator.  If |buflen| is less than the returned length, or |buffer| is
//  NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetFileIdentifier(FPDF_DOCUMENT document,FPDF_FILEIDTYPE id_type,void * buffer,unsigned long buflen);
//  Get meta-data |tag| content from |document|.
//    document - handle to the document.
//    tag      - the tag to retrieve. The tag can be one of:
//                 Title, Author, Subject, Keywords, Creator, Producer,
//                 CreationDate, or ModDate.
//               For detailed explanations of these tags and their respective
//               values, please refer to PDF Reference 1.6, section 10.2.1,
//               'Document Information Dictionary'.
//    buffer   - a buffer for the tag. May be NULL.
//    buflen   - the length of the buffer, in bytes. May be 0.
//  Returns the number of bytes in the tag, including trailing zeros.
//  The |buffer| is always encoded in UTF-16LE. The |buffer| is followed by two
//  bytes of zeros indicating the end of the string.  If |buflen| is less than
//  the returned length, or |buffer| is NULL, |buffer| will not be modified.
//  For linearized files, FPDFAvail_IsFormAvail must be called before this, and
//  it must have returned PDF_FORM_AVAIL or PDF_FORM_NOTEXIST. Before that, there
//  is no guarantee the metadata has been loaded.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetMetaText(FPDF_DOCUMENT document,FPDF_BYTESTRING tag,void * buffer,unsigned long buflen);
//  Get the page label for |page_index| from |document|.
//    document    - handle to the document.
//    page_index  - the 0-based index of the page.
//    buffer      - a buffer for the page label. May be NULL.
//    buflen      - the length of the buffer, in bytes. May be 0.
//  Returns the number of bytes in the page label, including trailing zeros.
//  The |buffer| is always encoded in UTF-16LE. The |buffer| is followed by two
//  bytes of zeros indicating the end of the string.  If |buflen| is less than
//  the returned length, or |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetPageLabel(FPDF_DOCUMENT document,int page_index,void * buffer,unsigned long buflen);
#include "pdfium/fpdf_formfill.h"
//  Function: FPDFDOC_InitFormFillEnvironment
//        Initialize form fill environment.
//  Parameters:
//        document        -   Handle to document from FPDF_LoadDocument().
//        formInfo        -   Pointer to a FPDF_FORMFILLINFO structure.
//  Return Value:
//        Handle to the form fill module, or NULL on failure.
//  Comments:
//        This function should be called before any form fill operation.
//        The FPDF_FORMFILLINFO passed in via |formInfo| must remain valid until
//        the returned FPDF_FORMHANDLE is closed.
FFI_PLUGIN_EXPORT FPDF_FORMHANDLE PDFIUM_FPDFDOC_InitFormFillEnvironment(FPDF_DOCUMENT document,FPDF_FORMFILLINFO * formInfo);
//  Function: FPDFDOC_ExitFormFillEnvironment
//        Take ownership of |hHandle| and exit form fill environment.
//  Parameters:
//        hHandle     -   Handle to the form fill module, as returned by
//                        FPDFDOC_InitFormFillEnvironment().
//  Return Value:
//        None.
//  Comments:
//        This function is a no-op when |hHandle| is null.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFDOC_ExitFormFillEnvironment(FPDF_FORMHANDLE hHandle);
//  Function: FPDFPage_HasFormFieldAtPoint
//      Get the form field type by point.
//  Parameters:
//      hHandle     -   Handle to the form fill module. Returned by
//                      FPDFDOC_InitFormFillEnvironment().
//      page        -   Handle to the page. Returned by FPDF_LoadPage().
//      page_x      -   X position in PDF "user space".
//      page_y      -   Y position in PDF "user space".
//  Return Value:
//      Return the type of the form field; -1 indicates no field.
//      See field types above.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_HasFormFieldAtPoint(FPDF_FORMHANDLE hHandle,FPDF_PAGE page,double page_x,double page_y);
//  Function: FPDFPage_FormFieldZOrderAtPoint
//      Get the form field z-order by point.
//  Parameters:
//      hHandle     -   Handle to the form fill module. Returned by
//                      FPDFDOC_InitFormFillEnvironment().
//      page        -   Handle to the page. Returned by FPDF_LoadPage().
//      page_x      -   X position in PDF "user space".
//      page_y      -   Y position in PDF "user space".
//  Return Value:
//      Return the z-order of the form field; -1 indicates no field.
//      Higher numbers are closer to the front.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_FormFieldZOrderAtPoint(FPDF_FORMHANDLE hHandle,FPDF_PAGE page,double page_x,double page_y);
//  Function: FPDF_SetFormFieldHighlightColor
//        Set the highlight color of the specified (or all) form fields
//        in the document.
//  Parameters:
//        hHandle     -   Handle to the form fill module, as returned by
//                        FPDFDOC_InitFormFillEnvironment().
//        doc         -   Handle to the document, as returned by
//                        FPDF_LoadDocument().
//        fieldType   -   A 32-bit integer indicating the type of a form
//                        field (defined above).
//        color       -   The highlight color of the form field. Constructed by
//                        0xxxrrggbb.
//  Return Value:
//        None.
//  Comments:
//        When the parameter fieldType is set to FPDF_FORMFIELD_UNKNOWN, the
//        highlight color will be applied to all the form fields in the
//        document.
//        Please refresh the client window to show the highlight immediately
//        if necessary.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_SetFormFieldHighlightColor(FPDF_FORMHANDLE hHandle,int fieldType,unsigned long color);
//  Function: FPDF_SetFormFieldHighlightAlpha
//        Set the transparency of the form field highlight color in the
//        document.
//  Parameters:
//        hHandle     -   Handle to the form fill module, as returned by
//                        FPDFDOC_InitFormFillEnvironment().
//        doc         -   Handle to the document, as returaned by
//                        FPDF_LoadDocument().
//        alpha       -   The transparency of the form field highlight color,
//                        between 0-255.
//  Return Value:
//        None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_SetFormFieldHighlightAlpha(FPDF_FORMHANDLE hHandle,unsigned char alpha);
//  Function: FPDF_RemoveFormFieldHighlight
//        Remove the form field highlight color in the document.
//  Parameters:
//        hHandle     -   Handle to the form fill module, as returned by
//                        FPDFDOC_InitFormFillEnvironment().
//  Return Value:
//        None.
//  Comments:
//        Please refresh the client window to remove the highlight immediately
//        if necessary.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_RemoveFormFieldHighlight(FPDF_FORMHANDLE hHandle);
//  Function: FPDF_FFLDraw
//        Render FormFields and popup window on a page to a device independent
//        bitmap.
//  Parameters:
//        hHandle      -   Handle to the form fill module, as returned by
//                         FPDFDOC_InitFormFillEnvironment().
//        bitmap       -   Handle to the device independent bitmap (as the
//                         output buffer). Bitmap handles can be created by
//                         FPDFBitmap_Create().
//        page         -   Handle to the page, as returned by FPDF_LoadPage().
//        start_x      -   Left pixel position of the display area in the
//                         device coordinates.
//        start_y      -   Top pixel position of the display area in the device
//                         coordinates.
//        size_x       -   Horizontal size (in pixels) for displaying the page.
//        size_y       -   Vertical size (in pixels) for displaying the page.
//        rotate       -   Page orientation: 0 (normal), 1 (rotated 90 degrees
//                         clockwise), 2 (rotated 180 degrees), 3 (rotated 90
//                         degrees counter-clockwise).
//        flags        -   0 for normal display, or combination of flags
//                         defined above.
//  Return Value:
//        None.
//  Comments:
//        This function is designed to render annotations that are
//        user-interactive, which are widget annotations (for FormFields) and
//        popup annotations.
//        With the FPDF_ANNOT flag, this function will render a popup annotation
//        when users mouse-hover on a non-widget annotation. Regardless of
//        FPDF_ANNOT flag, this function will always render widget annotations
//        for FormFields.
//        In order to implement the FormFill functions, implementation should
//        call this function after rendering functions, such as
//        FPDF_RenderPageBitmap() or FPDF_RenderPageBitmap_Start(), have
//        finished rendering the page contents.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_FFLDraw(FPDF_FORMHANDLE hHandle,FPDF_BITMAP bitmap,FPDF_PAGE page,int start_x,int start_y,int size_x,int size_y,int rotate,int flags);
//  Experimental API
//  Function: FPDF_GetFormType
//            Returns the type of form contained in the PDF document.
//  Parameters:
//            document - Handle to document.
//  Return Value:
//            Integer value representing one of the FORMTYPE_ values.
//  Comments:
//            If |document| is NULL, then the return value is FORMTYPE_NONE.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_GetFormType(FPDF_DOCUMENT document);
//  Function: FPDF_LoadXFA
//           If the document consists of XFA fields, call this method to
//           attempt to load XFA fields.
//  Parameters:
//           document     -   Handle to document from FPDF_LoadDocument().
//  Return Value:
//           TRUE upon success, otherwise FALSE. If XFA support is not built
//           into PDFium, performs no action and always returns FALSE.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_LoadXFA(FPDF_DOCUMENT document);
#include "pdfium/fpdf_fwlevent.h"
#include "pdfium/fpdf_signature.h"
//  Experimental API.
//  Function: FPDF_GetSignatureCount
//           Get total number of signatures in the document.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument().
//  Return value:
//           Total number of signatures in the document on success, -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_GetSignatureCount(FPDF_DOCUMENT document);
//  Experimental API.
//  Function: FPDF_GetSignatureObject
//           Get the Nth signature of the document.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument().
//           index       -   Index into the array of signatures of the document.
//  Return value:
//           Returns the handle to the signature, or NULL on failure. The caller
//           does not take ownership of the returned FPDF_SIGNATURE. Instead, it
//           remains valid until FPDF_CloseDocument() is called for the document.
FFI_PLUGIN_EXPORT FPDF_SIGNATURE PDFIUM_FPDF_GetSignatureObject(FPDF_DOCUMENT document,int index);
//  Experimental API.
//  Function: FPDFSignatureObj_GetContents
//           Get the contents of a signature object.
//  Parameters:
//           signature   -   Handle to the signature object. Returned by
//                           FPDF_GetSignatureObject().
//           buffer      -   The address of a buffer that receives the contents.
//           length      -   The size, in bytes, of |buffer|.
//  Return value:
//           Returns the number of bytes in the contents on success, 0 on error.
//  For public-key signatures, |buffer| is either a DER-encoded PKCS#1 binary or
//  a DER-encoded PKCS#7 binary. If |length| is less than the returned length, or
//  |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFSignatureObj_GetContents(FPDF_SIGNATURE signature,void * buffer,unsigned long length);
//  Experimental API.
//  Function: FPDFSignatureObj_GetByteRange
//           Get the byte range of a signature object.
//  Parameters:
//           signature   -   Handle to the signature object. Returned by
//                           FPDF_GetSignatureObject().
//           buffer      -   The address of a buffer that receives the
//                           byte range.
//           length      -   The size, in ints, of |buffer|.
//  Return value:
//           Returns the number of ints in the byte range on
//           success, 0 on error.
//  |buffer| is an array of pairs of integers (starting byte offset,
//  length in bytes) that describes the exact byte range for the digest
//  calculation. If |length| is less than the returned length, or
//  |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFSignatureObj_GetByteRange(FPDF_SIGNATURE signature,int * buffer,unsigned long length);
//  Experimental API.
//  Function: FPDFSignatureObj_GetSubFilter
//           Get the encoding of the value of a signature object.
//  Parameters:
//           signature   -   Handle to the signature object. Returned by
//                           FPDF_GetSignatureObject().
//           buffer      -   The address of a buffer that receives the encoding.
//           length      -   The size, in bytes, of |buffer|.
//  Return value:
//           Returns the number of bytes in the encoding name (including the
//           trailing NUL character) on success, 0 on error.
//  The |buffer| is always encoded in 7-bit ASCII. If |length| is less than the
//  returned length, or |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFSignatureObj_GetSubFilter(FPDF_SIGNATURE signature,char * buffer,unsigned long length);
//  Experimental API.
//  Function: FPDFSignatureObj_GetReason
//           Get the reason (comment) of the signature object.
//  Parameters:
//           signature   -   Handle to the signature object. Returned by
//                           FPDF_GetSignatureObject().
//           buffer      -   The address of a buffer that receives the reason.
//           length      -   The size, in bytes, of |buffer|.
//  Return value:
//           Returns the number of bytes in the reason on success, 0 on error.
//  Regardless of the platform, the |buffer| is always in UTF-16LE encoding. The
//  string is terminated by a UTF16 NUL character. If |length| is less than the
//  returned length, or |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFSignatureObj_GetReason(FPDF_SIGNATURE signature,void * buffer,unsigned long length);
//  Experimental API.
//  Function: FPDFSignatureObj_GetTime
//           Get the time of signing of a signature object.
//  Parameters:
//           signature   -   Handle to the signature object. Returned by
//                           FPDF_GetSignatureObject().
//           buffer      -   The address of a buffer that receives the time.
//           length      -   The size, in bytes, of |buffer|.
//  Return value:
//           Returns the number of bytes in the encoding name (including the
//           trailing NUL character) on success, 0 on error.
//  The |buffer| is always encoded in 7-bit ASCII. If |length| is less than the
//  returned length, or |buffer| is NULL, |buffer| will not be modified.
//  The format of time is expected to be D:YYYYMMDDHHMMSS+XX'YY', i.e. it's
//  percision is seconds, with timezone information. This value should be used
//  only when the time of signing is not available in the (PKCS#7 binary)
//  signature.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFSignatureObj_GetTime(FPDF_SIGNATURE signature,char * buffer,unsigned long length);
//  Experimental API.
//  Function: FPDFSignatureObj_GetDocMDPPermission
//           Get the DocMDP permission of a signature object.
//  Parameters:
//           signature   -   Handle to the signature object. Returned by
//                           FPDF_GetSignatureObject().
//  Return value:
//           Returns the permission (1, 2 or 3) on success, 0 on error.
FFI_PLUGIN_EXPORT unsigned int PDFIUM_FPDFSignatureObj_GetDocMDPPermission(FPDF_SIGNATURE signature);
#include "pdfium/fpdf_structtree.h"
//  Function: FPDF_StructTree_GetForPage
//           Get the structure tree for a page.
//  Parameters:
//           page        -   Handle to the page, as returned by FPDF_LoadPage().
//  Return value:
//           A handle to the structure tree or NULL on error. The caller owns the
//           returned handle and must use FPDF_StructTree_Close() to release it.
//           The handle should be released before |page| gets released.
FFI_PLUGIN_EXPORT FPDF_STRUCTTREE PDFIUM_FPDF_StructTree_GetForPage(FPDF_PAGE page);
//  Function: FPDF_StructTree_Close
//           Release a resource allocated by FPDF_StructTree_GetForPage().
//  Parameters:
//           struct_tree -   Handle to the structure tree, as returned by
//                           FPDF_StructTree_LoadPage().
//  Return value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_StructTree_Close(FPDF_STRUCTTREE struct_tree);
//  Function: FPDF_StructTree_CountChildren
//           Count the number of children for the structure tree.
//  Parameters:
//           struct_tree -   Handle to the structure tree, as returned by
//                           FPDF_StructTree_LoadPage().
//  Return value:
//           The number of children, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructTree_CountChildren(FPDF_STRUCTTREE struct_tree);
//  Function: FPDF_StructTree_GetChildAtIndex
//           Get a child in the structure tree.
//  Parameters:
//           struct_tree -   Handle to the structure tree, as returned by
//                           FPDF_StructTree_LoadPage().
//           index       -   The index for the child, 0-based.
//  Return value:
//           The child at the n-th index or NULL on error. The caller does not
//           own the handle. The handle remains valid as long as |struct_tree|
//           remains valid.
//  Comments:
//           The |index| must be less than the FPDF_StructTree_CountChildren()
//           return value.
FFI_PLUGIN_EXPORT FPDF_STRUCTELEMENT PDFIUM_FPDF_StructTree_GetChildAtIndex(FPDF_STRUCTTREE struct_tree,int index);
//  Function: FPDF_StructElement_GetAltText
//           Get the alt text for a given element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           buffer         -   A buffer for output the alt text. May be NULL.
//           buflen         -   The length of the buffer, in bytes. May be 0.
//  Return value:
//           The number of bytes in the alt text, including the terminating NUL
//           character. The number of bytes is returned regardless of the
//           |buffer| and |buflen| parameters.
//  Comments:
//           Regardless of the platform, the |buffer| is always in UTF-16LE
//           encoding. The string is terminated by a UTF16 NUL character. If
//           |buflen| is less than the required length, or |buffer| is NULL,
//           |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetAltText(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Experimental API.
//  Function: FPDF_StructElement_GetActualText
//           Get the actual text for a given element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           buffer         -   A buffer for output the actual text. May be NULL.
//           buflen         -   The length of the buffer, in bytes. May be 0.
//  Return value:
//           The number of bytes in the actual text, including the terminating
//           NUL character. The number of bytes is returned regardless of the
//           |buffer| and |buflen| parameters.
//  Comments:
//           Regardless of the platform, the |buffer| is always in UTF-16LE
//           encoding. The string is terminated by a UTF16 NUL character. If
//           |buflen| is less than the required length, or |buffer| is NULL,
//           |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetActualText(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Function: FPDF_StructElement_GetID
//           Get the ID for a given element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           buffer         -   A buffer for output the ID string. May be NULL.
//           buflen         -   The length of the buffer, in bytes. May be 0.
//  Return value:
//           The number of bytes in the ID string, including the terminating NUL
//           character. The number of bytes is returned regardless of the
//           |buffer| and |buflen| parameters.
//  Comments:
//           Regardless of the platform, the |buffer| is always in UTF-16LE
//           encoding. The string is terminated by a UTF16 NUL character. If
//           |buflen| is less than the required length, or |buffer| is NULL,
//           |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetID(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Experimental API.
//  Function: FPDF_StructElement_GetLang
//           Get the case-insensitive IETF BCP 47 language code for an element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           buffer         -   A buffer for output the lang string. May be NULL.
//           buflen         -   The length of the buffer, in bytes. May be 0.
//  Return value:
//           The number of bytes in the ID string, including the terminating NUL
//           character. The number of bytes is returned regardless of the
//           |buffer| and |buflen| parameters.
//  Comments:
//           Regardless of the platform, the |buffer| is always in UTF-16LE
//           encoding. The string is terminated by a UTF16 NUL character. If
//           |buflen| is less than the required length, or |buffer| is NULL,
//           |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetLang(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Experimental API.
//  Function: FPDF_StructElement_GetStringAttribute
//           Get a struct element attribute of type "name" or "string".
//  Parameters:
//           struct_element -   Handle to the struct element.
//           attr_name      -   The name of the attribute to retrieve.
//           buffer         -   A buffer for output. May be NULL.
//           buflen         -   The length of the buffer, in bytes. May be 0.
//  Return value:
//           The number of bytes in the attribute value, including the
//           terminating NUL character. The number of bytes is returned
//           regardless of the |buffer| and |buflen| parameters.
//  Comments:
//           Regardless of the platform, the |buffer| is always in UTF-16LE
//           encoding. The string is terminated by a UTF16 NUL character. If
//           |buflen| is less than the required length, or |buffer| is NULL,
//           |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetStringAttribute(FPDF_STRUCTELEMENT struct_element,FPDF_BYTESTRING attr_name,void * buffer,unsigned long buflen);
//  Function: FPDF_StructElement_GetMarkedContentID
//           Get the marked content ID for a given element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//  Return value:
//           The marked content ID of the element. If no ID exists, returns
//           -1.
//  Comments:
//           FPDF_StructElement_GetMarkedContentIdAtIndex() may be able to
//           extract more marked content IDs out of |struct_element|. This API
//           may be deprecated in the future.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_GetMarkedContentID(FPDF_STRUCTELEMENT struct_element);
//  Function: FPDF_StructElement_GetType
//            Get the type (/S) for a given element.
//  Parameters:
//            struct_element - Handle to the struct element.
//            buffer         - A buffer for output. May be NULL.
//            buflen         - The length of the buffer, in bytes. May be 0.
//  Return value:
//            The number of bytes in the type, including the terminating NUL
//            character. The number of bytes is returned regardless of the
//            |buffer| and |buflen| parameters.
//  Comments:
//            Regardless of the platform, the |buffer| is always in UTF-16LE
//            encoding. The string is terminated by a UTF16 NUL character. If
//            |buflen| is less than the required length, or |buffer| is NULL,
//            |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetType(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Experimental API.
//  Function: FPDF_StructElement_GetObjType
//            Get the object type (/Type) for a given element.
//  Parameters:
//            struct_element - Handle to the struct element.
//            buffer         - A buffer for output. May be NULL.
//            buflen         - The length of the buffer, in bytes. May be 0.
//  Return value:
//            The number of bytes in the object type, including the terminating
//            NUL character. The number of bytes is returned regardless of the
//            |buffer| and |buflen| parameters.
//  Comments:
//            Regardless of the platform, the |buffer| is always in UTF-16LE
//            encoding. The string is terminated by a UTF16 NUL character. If
//            |buflen| is less than the required length, or |buffer| is NULL,
//            |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetObjType(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Function: FPDF_StructElement_GetTitle
//            Get the title (/T) for a given element.
//  Parameters:
//            struct_element - Handle to the struct element.
//            buffer         - A buffer for output. May be NULL.
//            buflen         - The length of the buffer, in bytes. May be 0.
//  Return value:
//            The number of bytes in the title, including the terminating NUL
//            character. The number of bytes is returned regardless of the
//            |buffer| and |buflen| parameters.
//  Comments:
//            Regardless of the platform, the |buffer| is always in UTF-16LE
//            encoding. The string is terminated by a UTF16 NUL character. If
//            |buflen| is less than the required length, or |buffer| is NULL,
//            |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_StructElement_GetTitle(FPDF_STRUCTELEMENT struct_element,void * buffer,unsigned long buflen);
//  Function: FPDF_StructElement_CountChildren
//           Count the number of children for the structure element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//  Return value:
//           The number of children, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_CountChildren(FPDF_STRUCTELEMENT struct_element);
//  Function: FPDF_StructElement_GetChildAtIndex
//           Get a child in the structure element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           index          -   The index for the child, 0-based.
//  Return value:
//           The child at the n-th index or NULL on error.
//  Comments:
//           If the child exists but is not an element, then this function will
//           return NULL. This will also return NULL for out of bounds indices.
//           The |index| must be less than the FPDF_StructElement_CountChildren()
//           return value.
FFI_PLUGIN_EXPORT FPDF_STRUCTELEMENT PDFIUM_FPDF_StructElement_GetChildAtIndex(FPDF_STRUCTELEMENT struct_element,int index);
//  Experimental API.
//  Function: FPDF_StructElement_GetChildMarkedContentID
//           Get the child's content id
//  Parameters:
//           struct_element -   Handle to the struct element.
//           index          -   The index for the child, 0-based.
//  Return value:
//           The marked content ID of the child. If no ID exists, returns -1.
//  Comments:
//           If the child exists but is not a stream or object, then this
//           function will return -1. This will also return -1 for out of bounds
//           indices. Compared to FPDF_StructElement_GetMarkedContentIdAtIndex,
//           it is scoped to the current page.
//           The |index| must be less than the FPDF_StructElement_CountChildren()
//           return value.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_GetChildMarkedContentID(FPDF_STRUCTELEMENT struct_element,int index);
//  Experimental API.
//  Function: FPDF_StructElement_GetParent
//           Get the parent of the structure element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//  Return value:
//           The parent structure element or NULL on error.
//  Comments:
//           If structure element is StructTreeRoot, then this function will
//           return NULL.
FFI_PLUGIN_EXPORT FPDF_STRUCTELEMENT PDFIUM_FPDF_StructElement_GetParent(FPDF_STRUCTELEMENT struct_element);
//  Function: FPDF_StructElement_GetAttributeCount
//           Count the number of attributes for the structure element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//  Return value:
//           The number of attributes, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_GetAttributeCount(FPDF_STRUCTELEMENT struct_element);
//  Experimental API.
//  Function: FPDF_StructElement_GetAttributeAtIndex
//           Get an attribute object in the structure element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           index          -   The index for the attribute object, 0-based.
//  Return value:
//           The attribute object at the n-th index or NULL on error.
//  Comments:
//           If the attribute object exists but is not a dict, then this
//           function will return NULL. This will also return NULL for out of
//           bounds indices. The caller does not own the handle. The handle
//           remains valid as long as |struct_element| remains valid.
//           The |index| must be less than the
//           FPDF_StructElement_GetAttributeCount() return value.
FFI_PLUGIN_EXPORT FPDF_STRUCTELEMENT_ATTR PDFIUM_FPDF_StructElement_GetAttributeAtIndex(FPDF_STRUCTELEMENT struct_element,int index);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetCount
//           Count the number of attributes in a structure element attribute map.
//  Parameters:
//           struct_attribute - Handle to the struct element attribute.
//  Return value:
//           The number of attributes, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_Attr_GetCount(FPDF_STRUCTELEMENT_ATTR struct_attribute);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetName
//           Get the name of an attribute in a structure element attribute map.
//  Parameters:
//           struct_attribute   - Handle to the struct element attribute.
//           index              - The index of attribute in the map.
//           buffer             - A buffer for output. May be NULL. This is only
//                                modified if |buflen| is longer than the length
//                                of the key. Optional, pass null to just
//                                retrieve the size of the buffer needed.
//           buflen             - The length of the buffer.
//           out_buflen         - A pointer to variable that will receive the
//                                minimum buffer size to contain the key. Not
//                                filled if FALSE is returned.
//  Return value:
//           TRUE if the operation was successful, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_StructElement_Attr_GetName(FPDF_STRUCTELEMENT_ATTR struct_attribute,int index,void * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetValue
//            Get a handle to a value for an attribute in a structure element
//            attribute map.
//  Parameters:
//            struct_attribute   - Handle to the struct element attribute.
//            name               - The attribute name.
//  Return value:
//            Returns a handle to the value associated with the input, if any.
//            Returns NULL on failure. The caller does not own the handle.
//            The handle remains valid as long as |struct_attribute| remains
//            valid.
FFI_PLUGIN_EXPORT FPDF_STRUCTELEMENT_ATTR_VALUE PDFIUM_FPDF_StructElement_Attr_GetValue(FPDF_STRUCTELEMENT_ATTR struct_attribute,FPDF_BYTESTRING name);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetType
//            Get the type of an attribute in a structure element attribute map.
//  Parameters:
//            value - Handle to the value.
//  Return value:
//            Returns the type of the value, or FPDF_OBJECT_UNKNOWN in case of
//            failure. Note that this will never return FPDF_OBJECT_REFERENCE, as
//            references are always dereferenced.
FFI_PLUGIN_EXPORT FPDF_OBJECT_TYPE PDFIUM_FPDF_StructElement_Attr_GetType(FPDF_STRUCTELEMENT_ATTR_VALUE value);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetBooleanValue
//            Get the value of a boolean attribute in an attribute map as
//            FPDF_BOOL. FPDF_StructElement_Attr_GetType() should have returned
//            FPDF_OBJECT_BOOLEAN for this property.
//  Parameters:
//            value     - Handle to the value.
//            out_value - A pointer to variable that will receive the value. Not
//                        filled if false is returned.
//  Return value:
//            Returns TRUE if the attribute maps to a boolean value, FALSE
//            otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_StructElement_Attr_GetBooleanValue(FPDF_STRUCTELEMENT_ATTR_VALUE value,FPDF_BOOL * out_value);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetNumberValue
//            Get the value of a number attribute in an attribute map as float.
//            FPDF_StructElement_Attr_GetType() should have returned
//            FPDF_OBJECT_NUMBER for this property.
//  Parameters:
//            value     - Handle to the value.
//            out_value - A pointer to variable that will receive the value. Not
//                        filled if false is returned.
//  Return value:
//            Returns TRUE if the attribute maps to a number value, FALSE
//            otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_StructElement_Attr_GetNumberValue(FPDF_STRUCTELEMENT_ATTR_VALUE value,float * out_value);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetStringValue
//            Get the value of a string attribute in an attribute map as string.
//            FPDF_StructElement_Attr_GetType() should have returned
//            FPDF_OBJECT_STRING or FPDF_OBJECT_NAME for this property.
//  Parameters:
//            value      - Handle to the value.
//            buffer     - A buffer for holding the returned key in UTF-16LE.
//                         This is only modified if |buflen| is longer than the
//                         length of the key. Optional, pass null to just
//                         retrieve the size of the buffer needed.
//            buflen     - The length of the buffer.
//            out_buflen - A pointer to variable that will receive the minimum
//                         buffer size to contain the key. Not filled if FALSE is
//                         returned.
//  Return value:
//            Returns TRUE if the attribute maps to a string value, FALSE
//            otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_StructElement_Attr_GetStringValue(FPDF_STRUCTELEMENT_ATTR_VALUE value,void * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetBlobValue
//            Get the value of a blob attribute in an attribute map as string.
//  Parameters:
//            value      - Handle to the value.
//            buffer     - A buffer for holding the returned value. This is only
//                         modified if |buflen| is at least as long as the length
//                         of the value. Optional, pass null to just retrieve the
//                         size of the buffer needed.
//            buflen     - The length of the buffer.
//            out_buflen - A pointer to variable that will receive the minimum
//                         buffer size to contain the key. Not filled if FALSE is
//                         returned.
//  Return value:
//            Returns TRUE if the attribute maps to a string value, FALSE
//            otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_StructElement_Attr_GetBlobValue(FPDF_STRUCTELEMENT_ATTR_VALUE value,void * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_CountChildren
//            Count the number of children values in an attribute.
//  Parameters:
//            value - Handle to the value.
//  Return value:
//            The number of children, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_Attr_CountChildren(FPDF_STRUCTELEMENT_ATTR_VALUE value);
//  Experimental API.
//  Function: FPDF_StructElement_Attr_GetChildAtIndex
//            Get a child from an attribute.
//  Parameters:
//            value - Handle to the value.
//            index - The index for the child, 0-based.
//  Return value:
//            The child at the n-th index or NULL on error.
//  Comments:
//            The |index| must be less than the
//            FPDF_StructElement_Attr_CountChildren() return value.
FFI_PLUGIN_EXPORT FPDF_STRUCTELEMENT_ATTR_VALUE PDFIUM_FPDF_StructElement_Attr_GetChildAtIndex(FPDF_STRUCTELEMENT_ATTR_VALUE value,int index);
//  Experimental API.
//  Function: FPDF_StructElement_GetMarkedContentIdCount
//           Get the count of marked content ids for a given element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//  Return value:
//           The count of marked content ids or -1 if none exists.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_GetMarkedContentIdCount(FPDF_STRUCTELEMENT struct_element);
//  Experimental API.
//  Function: FPDF_StructElement_GetMarkedContentIdAtIndex
//           Get the marked content id at a given index for a given element.
//  Parameters:
//           struct_element -   Handle to the struct element.
//           index          -   The index of the marked content id, 0-based.
//  Return value:
//           The marked content ID of the element. If no ID exists, returns
//           -1.
//  Comments:
//           The |index| must be less than the
//           FPDF_StructElement_GetMarkedContentIdCount() return value.
//           This will likely supersede FPDF_StructElement_GetMarkedContentID().
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_StructElement_GetMarkedContentIdAtIndex(FPDF_STRUCTELEMENT struct_element,int index);
#include "pdfium/fpdf_ppo.h"
//  Experimental API.
//  Import pages to a FPDF_DOCUMENT.
//    dest_doc     - The destination document for the pages.
//    src_doc      - The document to be imported.
//    page_indices - An array of page indices to be imported. The first page is
//                   zero. If |page_indices| is NULL, all pages from |src_doc|
//                   are imported.
//    length       - The length of the |page_indices| array.
//    index        - The page index at which to insert the first imported page
//                   into |dest_doc|. The first page is zero.
//  Returns TRUE on success. Returns FALSE if any pages in |page_indices| is
//  invalid.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_ImportPagesByIndex(FPDF_DOCUMENT dest_doc,FPDF_DOCUMENT src_doc,const int * page_indices,unsigned long length,int index);
//  Import pages to a FPDF_DOCUMENT.
//    dest_doc  - The destination document for the pages.
//    src_doc   - The document to be imported.
//    pagerange - A page range string, Such as "1,3,5-7". The first page is one.
//                If |pagerange| is NULL, all pages from |src_doc| are imported.
//    index     - The page index at which to insert the first imported page into
//                |dest_doc|. The first page is zero.
//  Returns TRUE on success. Returns FALSE if any pages in |pagerange| is
//  invalid or if |pagerange| cannot be read.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_ImportPages(FPDF_DOCUMENT dest_doc,FPDF_DOCUMENT src_doc,FPDF_BYTESTRING pagerange,int index);
//  Experimental API.
//  Create a new document from |src_doc|.  The pages of |src_doc| will be
//  combined to provide |num_pages_on_x_axis x num_pages_on_y_axis| pages per
//  |output_doc| page.
//    src_doc             - The document to be imported.
//    output_width        - The output page width in PDF "user space" units.
//    output_height       - The output page height in PDF "user space" units.
//    num_pages_on_x_axis - The number of pages on X Axis.
//    num_pages_on_y_axis - The number of pages on Y Axis.
//  Return value:
//    A handle to the created document, or NULL on failure.
//  Comments:
//    number of pages per page = num_pages_on_x_axis * num_pages_on_y_axis
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDF_ImportNPagesToOne(FPDF_DOCUMENT src_doc,float output_width,float output_height,size_t num_pages_on_x_axis,size_t num_pages_on_y_axis);
//  Experimental API.
//  Create a template to generate form xobjects from |src_doc|'s page at
//  |src_page_index|, for use in |dest_doc|.
//  Returns a handle on success, or NULL on failure. Caller owns the newly
//  created object.
FFI_PLUGIN_EXPORT FPDF_XOBJECT PDFIUM_FPDF_NewXObjectFromPage(FPDF_DOCUMENT dest_doc,FPDF_DOCUMENT src_doc,int src_page_index);
//  Experimental API.
//  Close an FPDF_XOBJECT handle created by FPDF_NewXObjectFromPage().
//  FPDF_PAGEOBJECTs created from the FPDF_XOBJECT handle are not affected.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_CloseXObject(FPDF_XOBJECT xobject);
//  Experimental API.
//  Create a new form object from an FPDF_XOBJECT object.
//  Returns a new form object on success, or NULL on failure. Caller owns the
//  newly created object.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDF_NewFormObjectFromXObject(FPDF_XOBJECT xobject);
//  Copy the viewer preferences from |src_doc| into |dest_doc|.
//    dest_doc - Document to write the viewer preferences into.
//    src_doc  - Document to read the viewer preferences from.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_CopyViewerPreferences(FPDF_DOCUMENT dest_doc,FPDF_DOCUMENT src_doc);
#include "pdfium/fpdfview.h"
//  Function: FPDF_InitLibraryWithConfig
//           Initialize the PDFium library and allocate global resources for it.
//  Parameters:
//           config - configuration information as above.
//  Return value:
//           None.
//  Comments:
//           You have to call this function before you can call any PDF
//           processing functions.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_InitLibraryWithConfig(const FPDF_LIBRARY_CONFIG * config);
//  Function: FPDF_InitLibrary
//           Initialize the PDFium library (alternative form).
//  Parameters:
//           None
//  Return value:
//           None.
//  Comments:
//           Convenience function to call FPDF_InitLibraryWithConfig() with a
//           default configuration for backwards compatibility purposes. New
//           code should call FPDF_InitLibraryWithConfig() instead. This will
//           be deprecated in the future.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_InitLibrary();
//  Function: FPDF_DestroyLibrary
//           Release global resources allocated to the PDFium library by
//           FPDF_InitLibrary() or FPDF_InitLibraryWithConfig().
//  Parameters:
//           None.
//  Return value:
//           None.
//  Comments:
//           After this function is called, you must not call any PDF
//           processing functions.
//           Calling this function does not automatically close other
//           objects. It is recommended to close other objects before
//           closing the library with this function.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_DestroyLibrary();
//  Function: FPDF_SetSandBoxPolicy
//           Set the policy for the sandbox environment.
//  Parameters:
//           policy -   The specified policy for setting, for example:
//                      FPDF_POLICY_MACHINETIME_ACCESS.
//           enable -   True to enable, false to disable the policy.
//  Return value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_SetSandBoxPolicy(FPDF_DWORD policy,FPDF_BOOL enable);
//  Function: FPDF_LoadDocument
//           Open and load a PDF document.
//  Parameters:
//           file_path -  Path to the PDF file (including extension).
//           password  -  A string used as the password for the PDF file.
//                        If no password is needed, empty or NULL can be used.
//                        See comments below regarding the encoding.
//  Return value:
//           A handle to the loaded document, or NULL on failure.
//  Comments:
//           Loaded document can be closed by FPDF_CloseDocument().
//           If this function fails, you can use FPDF_GetLastError() to retrieve
//           the reason why it failed.
//           The encoding for |file_path| is UTF-8.
//           The encoding for |password| can be either UTF-8 or Latin-1. PDFs,
//           depending on the security handler revision, will only accept one or
//           the other encoding. If |password|'s encoding and the PDF's expected
//           encoding do not match, FPDF_LoadDocument() will automatically
//           convert |password| to the other encoding.
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDF_LoadDocument(FPDF_STRING file_path,FPDF_BYTESTRING password);
//  Function: FPDF_LoadMemDocument
//           Open and load a PDF document from memory.
//  Parameters:
//           data_buf    -   Pointer to a buffer containing the PDF document.
//           size        -   Number of bytes in the PDF document.
//           password    -   A string used as the password for the PDF file.
//                           If no password is needed, empty or NULL can be used.
//  Return value:
//           A handle to the loaded document, or NULL on failure.
//  Comments:
//           The memory buffer must remain valid when the document is open.
//           The loaded document can be closed by FPDF_CloseDocument.
//           If this function fails, you can use FPDF_GetLastError() to retrieve
//           the reason why it failed.
//           See the comments for FPDF_LoadDocument() regarding the encoding for
//           |password|.
//  Notes:
//           If PDFium is built with the XFA module, the application should call
//           FPDF_LoadXFA() function after the PDF document loaded to support XFA
//           fields defined in the fpdfformfill.h file.
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDF_LoadMemDocument(const void * data_buf,int size,FPDF_BYTESTRING password);
//  Experimental API.
//  Function: FPDF_LoadMemDocument64
//           Open and load a PDF document from memory.
//  Parameters:
//           data_buf    -   Pointer to a buffer containing the PDF document.
//           size        -   Number of bytes in the PDF document.
//           password    -   A string used as the password for the PDF file.
//                           If no password is needed, empty or NULL can be used.
//  Return value:
//           A handle to the loaded document, or NULL on failure.
//  Comments:
//           The memory buffer must remain valid when the document is open.
//           The loaded document can be closed by FPDF_CloseDocument.
//           If this function fails, you can use FPDF_GetLastError() to retrieve
//           the reason why it failed.
//           See the comments for FPDF_LoadDocument() regarding the encoding for
//           |password|.
//  Notes:
//           If PDFium is built with the XFA module, the application should call
//           FPDF_LoadXFA() function after the PDF document loaded to support XFA
//           fields defined in the fpdfformfill.h file.
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDF_LoadMemDocument64(const void * data_buf,size_t size,FPDF_BYTESTRING password);
//  Function: FPDF_LoadCustomDocument
//           Load PDF document from a custom access descriptor.
//  Parameters:
//           pFileAccess -   A structure for accessing the file.
//           password    -   Optional password for decrypting the PDF file.
//  Return value:
//           A handle to the loaded document, or NULL on failure.
//  Comments:
//           The application must keep the file resources |pFileAccess| points to
//           valid until the returned FPDF_DOCUMENT is closed. |pFileAccess|
//           itself does not need to outlive the FPDF_DOCUMENT.
//           The loaded document can be closed with FPDF_CloseDocument().
//           See the comments for FPDF_LoadDocument() regarding the encoding for
//           |password|.
//  Notes:
//           If PDFium is built with the XFA module, the application should call
//           FPDF_LoadXFA() function after the PDF document loaded to support XFA
//           fields defined in the fpdfformfill.h file.
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDF_LoadCustomDocument(FPDF_FILEACCESS * pFileAccess,FPDF_BYTESTRING password);
//  Function: FPDF_GetFileVersion
//           Get the file version of the given PDF document.
//  Parameters:
//           doc         -   Handle to a document.
//           fileVersion -   The PDF file version. File version: 14 for 1.4, 15
//                           for 1.5, ...
//  Return value:
//           True if succeeds, false otherwise.
//  Comments:
//           If the document was created by FPDF_CreateNewDocument,
//           then this function will always fail.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_GetFileVersion(FPDF_DOCUMENT doc,int * fileVersion);
//  Function: FPDF_GetLastError
//           Get last error code when a function fails.
//  Parameters:
//           None.
//  Return value:
//           A 32-bit integer indicating error code as defined above.
//  Comments:
//           If the previous SDK call succeeded, the return value of this
//           function is not defined. This function only works in conjunction
//           with APIs that mention FPDF_GetLastError() in their documentation.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetLastError();
//  Experimental API.
//  Function: FPDF_DocumentHasValidCrossReferenceTable
//           Whether the document's cross reference table is valid or not.
//  Parameters:
//           document    -   Handle to a document. Returned by FPDF_LoadDocument.
//  Return value:
//           True if the PDF parser did not encounter problems parsing the cross
//           reference table. False if the parser could not parse the cross
//           reference table and the table had to be rebuild from other data
//           within the document.
//  Comments:
//           The return value can change over time as the PDF parser evolves.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_DocumentHasValidCrossReferenceTable(FPDF_DOCUMENT document);
//  Experimental API.
//  Function: FPDF_GetTrailerEnds
//           Get the byte offsets of trailer ends.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument().
//           buffer      -   The address of a buffer that receives the
//                           byte offsets.
//           length      -   The size, in ints, of |buffer|.
//  Return value:
//           Returns the number of ints in the buffer on success, 0 on error.
//  |buffer| is an array of integers that describes the exact byte offsets of the
//  trailer ends in the document. If |length| is less than the returned length,
//  or |document| or |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetTrailerEnds(FPDF_DOCUMENT document,unsigned int * buffer,unsigned long length);
//  Function: FPDF_GetDocPermissions
//           Get file permission flags of the document.
//  Parameters:
//           document    -   Handle to a document. Returned by FPDF_LoadDocument.
//  Return value:
//           A 32-bit integer indicating permission flags. Please refer to the
//           PDF Reference for detailed descriptions. If the document is not
//           protected or was unlocked by the owner, 0xffffffff will be returned.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetDocPermissions(FPDF_DOCUMENT document);
//  Function: FPDF_GetDocUserPermissions
//           Get user file permission flags of the document.
//  Parameters:
//           document    -   Handle to a document. Returned by FPDF_LoadDocument.
//  Return value:
//           A 32-bit integer indicating permission flags. Please refer to the
//           PDF Reference for detailed descriptions. If the document is not
//           protected, 0xffffffff will be returned. Always returns user
//           permissions, even if the document was unlocked by the owner.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetDocUserPermissions(FPDF_DOCUMENT document);
//  Function: FPDF_GetSecurityHandlerRevision
//           Get the revision for the security handler.
//  Parameters:
//           document    -   Handle to a document. Returned by FPDF_LoadDocument.
//  Return value:
//           The security handler revision number. Please refer to the PDF
//           Reference for a detailed description. If the document is not
//           protected, -1 will be returned.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_GetSecurityHandlerRevision(FPDF_DOCUMENT document);
//  Function: FPDF_GetPageCount
//           Get total number of pages in the document.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument.
//  Return value:
//           Total number of pages in the document.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_GetPageCount(FPDF_DOCUMENT document);
//  Function: FPDF_LoadPage
//           Load a page inside the document.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument
//           page_index  -   Index number of the page. 0 for the first page.
//  Return value:
//           A handle to the loaded page, or NULL if page load fails.
//  Comments:
//           The loaded page can be rendered to devices using FPDF_RenderPage.
//           The loaded page can be closed using FPDF_ClosePage.
FFI_PLUGIN_EXPORT FPDF_PAGE PDFIUM_FPDF_LoadPage(FPDF_DOCUMENT document,int page_index);
//  Experimental API
//  Function: FPDF_GetPageWidthF
//           Get page width.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage().
//  Return value:
//           Page width (excluding non-displayable area) measured in points.
//           One point is 1/72 inch (around 0.3528 mm).
//  Comments:
//           Changing the rotation of |page| affects the return value.
FFI_PLUGIN_EXPORT float PDFIUM_FPDF_GetPageWidthF(FPDF_PAGE page);
//  Function: FPDF_GetPageWidth
//           Get page width.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage.
//  Return value:
//           Page width (excluding non-displayable area) measured in points.
//           One point is 1/72 inch (around 0.3528 mm).
//  Note:
//           Prefer FPDF_GetPageWidthF() above. This will be deprecated in the
//           future.
//  Comments:
//           Changing the rotation of |page| affects the return value.
FFI_PLUGIN_EXPORT double PDFIUM_FPDF_GetPageWidth(FPDF_PAGE page);
//  Experimental API
//  Function: FPDF_GetPageHeightF
//           Get page height.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage().
//  Return value:
//           Page height (excluding non-displayable area) measured in points.
//           One point is 1/72 inch (around 0.3528 mm)
//  Comments:
//           Changing the rotation of |page| affects the return value.
FFI_PLUGIN_EXPORT float PDFIUM_FPDF_GetPageHeightF(FPDF_PAGE page);
//  Function: FPDF_GetPageHeight
//           Get page height.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage.
//  Return value:
//           Page height (excluding non-displayable area) measured in points.
//           One point is 1/72 inch (around 0.3528 mm)
//  Note:
//           Prefer FPDF_GetPageHeightF() above. This will be deprecated in the
//           future.
//  Comments:
//           Changing the rotation of |page| affects the return value.
FFI_PLUGIN_EXPORT double PDFIUM_FPDF_GetPageHeight(FPDF_PAGE page);
//  Experimental API.
//  Function: FPDF_GetPageBoundingBox
//           Get the bounding box of the page. This is the intersection between
//           its media box and its crop box.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage.
//           rect        -   Pointer to a rect to receive the page bounding box.
//                           On an error, |rect| won't be filled.
//  Return value:
//           True for success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_GetPageBoundingBox(FPDF_PAGE page,FS_RECTF * rect);
//  Experimental API.
//  Function: FPDF_GetPageSizeByIndexF
//           Get the size of the page at the given index.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument().
//           page_index  -   Page index, zero for the first page.
//           size        -   Pointer to a FS_SIZEF to receive the page size.
//                           (in points).
//  Return value:
//           Non-zero for success. 0 for error (document or page not found).
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_GetPageSizeByIndexF(FPDF_DOCUMENT document,int page_index,FS_SIZEF * size);
//  Function: FPDF_GetPageSizeByIndex
//           Get the size of the page at the given index.
//  Parameters:
//           document    -   Handle to document. Returned by FPDF_LoadDocument.
//           page_index  -   Page index, zero for the first page.
//           width       -   Pointer to a double to receive the page width
//                           (in points).
//           height      -   Pointer to a double to receive the page height
//                           (in points).
//  Return value:
//           Non-zero for success. 0 for error (document or page not found).
//  Note:
//           Prefer FPDF_GetPageSizeByIndexF() above. This will be deprecated in
//           the future.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_GetPageSizeByIndex(FPDF_DOCUMENT document,int page_index,double * width,double * height);
//  Function: FPDF_RenderPageBitmap
//           Render contents of a page to a device independent bitmap.
//  Parameters:
//           bitmap      -   Handle to the device independent bitmap (as the
//                           output buffer). The bitmap handle can be created
//                           by FPDFBitmap_Create or retrieved from an image
//                           object by FPDFImageObj_GetBitmap.
//           page        -   Handle to the page. Returned by FPDF_LoadPage
//           start_x     -   Left pixel position of the display area in
//                           bitmap coordinates.
//           start_y     -   Top pixel position of the display area in bitmap
//                           coordinates.
//           size_x      -   Horizontal size (in pixels) for displaying the page.
//           size_y      -   Vertical size (in pixels) for displaying the page.
//           rotate      -   Page orientation:
//                             0 (normal)
//                             1 (rotated 90 degrees clockwise)
//                             2 (rotated 180 degrees)
//                             3 (rotated 90 degrees counter-clockwise)
//           flags       -   0 for normal display, or combination of the Page
//                           Rendering flags defined above. With the FPDF_ANNOT
//                           flag, it renders all annotations that do not require
//                           user-interaction, which are all annotations except
//                           widget and popup annotations.
//  Return value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_RenderPageBitmap(FPDF_BITMAP bitmap,FPDF_PAGE page,int start_x,int start_y,int size_x,int size_y,int rotate,int flags);
//  Function: FPDF_RenderPageBitmapWithMatrix
//           Render contents of a page to a device independent bitmap.
//  Parameters:
//           bitmap      -   Handle to the device independent bitmap (as the
//                           output buffer). The bitmap handle can be created
//                           by FPDFBitmap_Create or retrieved by
//                           FPDFImageObj_GetBitmap.
//           page        -   Handle to the page. Returned by FPDF_LoadPage.
//           matrix      -   The transform matrix, which must be invertible.
//                           See PDF Reference 1.7, 4.2.2 Common Transformations.
//           clipping    -   The rect to clip to in device coords.
//           flags       -   0 for normal display, or combination of the Page
//                           Rendering flags defined above. With the FPDF_ANNOT
//                           flag, it renders all annotations that do not require
//                           user-interaction, which are all annotations except
//                           widget and popup annotations.
//  Return value:
//           None. Note that behavior is undefined if det of |matrix| is 0.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_RenderPageBitmapWithMatrix(FPDF_BITMAP bitmap,FPDF_PAGE page,const FS_MATRIX * matrix,const FS_RECTF * clipping,int flags);
//  Function: FPDF_ClosePage
//           Close a loaded PDF page.
//  Parameters:
//           page        -   Handle to the loaded page.
//  Return value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_ClosePage(FPDF_PAGE page);
//  Function: FPDF_CloseDocument
//           Close a loaded PDF document.
//  Parameters:
//           document    -   Handle to the loaded document.
//  Return value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_CloseDocument(FPDF_DOCUMENT document);
//  Function: FPDF_DeviceToPage
//           Convert the screen coordinates of a point to page coordinates.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage.
//           start_x     -   Left pixel position of the display area in
//                           device coordinates.
//           start_y     -   Top pixel position of the display area in device
//                           coordinates.
//           size_x      -   Horizontal size (in pixels) for displaying the page.
//           size_y      -   Vertical size (in pixels) for displaying the page.
//           rotate      -   Page orientation:
//                             0 (normal)
//                             1 (rotated 90 degrees clockwise)
//                             2 (rotated 180 degrees)
//                             3 (rotated 90 degrees counter-clockwise)
//           device_x    -   X value in device coordinates to be converted.
//           device_y    -   Y value in device coordinates to be converted.
//           page_x      -   A pointer to a double receiving the converted X
//                           value in page coordinates.
//           page_y      -   A pointer to a double receiving the converted Y
//                           value in page coordinates.
//  Return value:
//           Returns true if the conversion succeeds, and |page_x| and |page_y|
//           successfully receives the converted coordinates.
//  Comments:
//           The page coordinate system has its origin at the left-bottom corner
//           of the page, with the X-axis on the bottom going to the right, and
//           the Y-axis on the left side going up.
//           NOTE: this coordinate system can be altered when you zoom, scroll,
//           or rotate a page, however, a point on the page should always have
//           the same coordinate values in the page coordinate system.
//           The device coordinate system is device dependent. For screen device,
//           its origin is at the left-top corner of the window. However this
//           origin can be altered by the Windows coordinate transformation
//           utilities.
//           You must make sure the start_x, start_y, size_x, size_y
//           and rotate parameters have exactly same values as you used in
//           the FPDF_RenderPage() function call.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_DeviceToPage(FPDF_PAGE page,int start_x,int start_y,int size_x,int size_y,int rotate,int device_x,int device_y,double * page_x,double * page_y);
//  Function: FPDF_PageToDevice
//           Convert the page coordinates of a point to screen coordinates.
//  Parameters:
//           page        -   Handle to the page. Returned by FPDF_LoadPage.
//           start_x     -   Left pixel position of the display area in
//                           device coordinates.
//           start_y     -   Top pixel position of the display area in device
//                           coordinates.
//           size_x      -   Horizontal size (in pixels) for displaying the page.
//           size_y      -   Vertical size (in pixels) for displaying the page.
//           rotate      -   Page orientation:
//                             0 (normal)
//                             1 (rotated 90 degrees clockwise)
//                             2 (rotated 180 degrees)
//                             3 (rotated 90 degrees counter-clockwise)
//           page_x      -   X value in page coordinates.
//           page_y      -   Y value in page coordinate.
//           device_x    -   A pointer to an integer receiving the result X
//                           value in device coordinates.
//           device_y    -   A pointer to an integer receiving the result Y
//                           value in device coordinates.
//  Return value:
//           Returns true if the conversion succeeds, and |device_x| and
//           |device_y| successfully receives the converted coordinates.
//  Comments:
//           See comments for FPDF_DeviceToPage().
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_PageToDevice(FPDF_PAGE page,int start_x,int start_y,int size_x,int size_y,int rotate,double page_x,double page_y,int * device_x,int * device_y);
//  Function: FPDFBitmap_Create
//           Create a device independent bitmap (FXDIB).
//  Parameters:
//           width       -   The number of pixels in width for the bitmap.
//                           Must be greater than 0.
//           height      -   The number of pixels in height for the bitmap.
//                           Must be greater than 0.
//           alpha       -   A flag indicating whether the alpha channel is used.
//                           Non-zero for using alpha, zero for not using.
//  Return value:
//           The created bitmap handle, or NULL if a parameter error or out of
//           memory.
//  Comments:
//           The bitmap always uses 4 bytes per pixel. The first byte is always
//           double word aligned.
//           The byte order is BGRx (the last byte unused if no alpha channel) or
//           BGRA.
//           The pixels in a horizontal line are stored side by side, with the
//           left most pixel stored first (with lower memory address).
//           Each line uses width * 4 bytes.
//           Lines are stored one after another, with the top most line stored
//           first. There is no gap between adjacent lines.
//           This function allocates enough memory for holding all pixels in the
//           bitmap, but it doesn't initialize the buffer. Applications can use
//           FPDFBitmap_FillRect() to fill the bitmap using any color. If the OS
//           allows it, this function can allocate up to 4 GB of memory.
FFI_PLUGIN_EXPORT FPDF_BITMAP PDFIUM_FPDFBitmap_Create(int width,int height,int alpha);
//  Function: FPDFBitmap_CreateEx
//           Create a device independent bitmap (FXDIB)
//  Parameters:
//           width       -   The number of pixels in width for the bitmap.
//                           Must be greater than 0.
//           height      -   The number of pixels in height for the bitmap.
//                           Must be greater than 0.
//           format      -   A number indicating for bitmap format, as defined
//                           above.
//           first_scan  -   A pointer to the first byte of the first line if
//                           using an external buffer. If this parameter is NULL,
//                           then a new buffer will be created.
//           stride      -   Number of bytes for each scan line. The value must
//                           be 0 or greater. When the value is 0,
//                           FPDFBitmap_CreateEx() will automatically calculate
//                           the appropriate value using |width| and |format|.
//                           When using an external buffer, it is recommended for
//                           the caller to pass in the value.
//                           When not using an external buffer, it is recommended
//                           for the caller to pass in 0.
//  Return value:
//           The bitmap handle, or NULL if parameter error or out of memory.
//  Comments:
//           Similar to FPDFBitmap_Create function, but allows for more formats
//           and an external buffer is supported. The bitmap created by this
//           function can be used in any place that a FPDF_BITMAP handle is
//           required.
//           If an external buffer is used, then the caller should destroy the
//           buffer. FPDFBitmap_Destroy() will not destroy the buffer.
//           It is recommended to use FPDFBitmap_GetStride() to get the stride
//           value.
FFI_PLUGIN_EXPORT FPDF_BITMAP PDFIUM_FPDFBitmap_CreateEx(int width,int height,int format,void * first_scan,int stride);
//  Function: FPDFBitmap_GetFormat
//           Get the format of the bitmap.
//  Parameters:
//           bitmap      -   Handle to the bitmap. Returned by FPDFBitmap_Create
//                           or FPDFImageObj_GetBitmap.
//  Return value:
//           The format of the bitmap.
//  Comments:
//           Only formats supported by FPDFBitmap_CreateEx are supported by this
//           function; see the list of such formats above.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFBitmap_GetFormat(FPDF_BITMAP bitmap);
//  Function: FPDFBitmap_FillRect
//           Fill a rectangle in a bitmap.
//  Parameters:
//           bitmap      -   The handle to the bitmap. Returned by
//                           FPDFBitmap_Create.
//           left        -   The left position. Starting from 0 at the
//                           left-most pixel.
//           top         -   The top position. Starting from 0 at the
//                           top-most line.
//           width       -   Width in pixels to be filled.
//           height      -   Height in pixels to be filled.
//           color       -   A 32-bit value specifing the color, in 8888 ARGB
//                           format.
//  Return value:
//           Returns whether the operation succeeded or not.
//  Comments:
//           This function sets the color and (optionally) alpha value in the
//           specified region of the bitmap.
//           NOTE: If the alpha channel is used, this function does NOT
//           composite the background with the source color, instead the
//           background will be replaced by the source color and the alpha.
//           If the alpha channel is not used, the alpha parameter is ignored.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFBitmap_FillRect(FPDF_BITMAP bitmap,int left,int top,int width,int height,FPDF_DWORD color);
//  Function: FPDFBitmap_GetBuffer
//           Get data buffer of a bitmap.
//  Parameters:
//           bitmap      -   Handle to the bitmap. Returned by FPDFBitmap_Create
//                           or FPDFImageObj_GetBitmap.
//  Return value:
//           The pointer to the first byte of the bitmap buffer.
//  Comments:
//           The stride may be more than width * number of bytes per pixel
//           Applications can use this function to get the bitmap buffer pointer,
//           then manipulate any color and/or alpha values for any pixels in the
//           bitmap.
//           Use FPDFBitmap_GetFormat() to find out the format of the data.
FFI_PLUGIN_EXPORT void * PDFIUM_FPDFBitmap_GetBuffer(FPDF_BITMAP bitmap);
//  Function: FPDFBitmap_GetWidth
//           Get width of a bitmap.
//  Parameters:
//           bitmap      -   Handle to the bitmap. Returned by FPDFBitmap_Create
//                           or FPDFImageObj_GetBitmap.
//  Return value:
//           The width of the bitmap in pixels.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFBitmap_GetWidth(FPDF_BITMAP bitmap);
//  Function: FPDFBitmap_GetHeight
//           Get height of a bitmap.
//  Parameters:
//           bitmap      -   Handle to the bitmap. Returned by FPDFBitmap_Create
//                           or FPDFImageObj_GetBitmap.
//  Return value:
//           The height of the bitmap in pixels.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFBitmap_GetHeight(FPDF_BITMAP bitmap);
//  Function: FPDFBitmap_GetStride
//           Get number of bytes for each line in the bitmap buffer.
//  Parameters:
//           bitmap      -   Handle to the bitmap. Returned by FPDFBitmap_Create
//                           or FPDFImageObj_GetBitmap.
//  Return value:
//           The number of bytes for each line in the bitmap buffer.
//  Comments:
//           The stride may be more than width * number of bytes per pixel.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFBitmap_GetStride(FPDF_BITMAP bitmap);
//  Function: FPDFBitmap_Destroy
//           Destroy a bitmap and release all related buffers.
//  Parameters:
//           bitmap      -   Handle to the bitmap. Returned by FPDFBitmap_Create
//                           or FPDFImageObj_GetBitmap.
//  Return value:
//           None.
//  Comments:
//           This function will not destroy any external buffers provided when
//           the bitmap was created.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFBitmap_Destroy(FPDF_BITMAP bitmap);
//  Function: FPDF_VIEWERREF_GetPrintScaling
//           Whether the PDF document prefers to be scaled or not.
//  Parameters:
//           document    -   Handle to the loaded document.
//  Return value:
//           None.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_VIEWERREF_GetPrintScaling(FPDF_DOCUMENT document);
//  Function: FPDF_VIEWERREF_GetNumCopies
//           Returns the number of copies to be printed.
//  Parameters:
//           document    -   Handle to the loaded document.
//  Return value:
//           The number of copies to be printed.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_VIEWERREF_GetNumCopies(FPDF_DOCUMENT document);
//  Function: FPDF_VIEWERREF_GetPrintPageRange
//           Page numbers to initialize print dialog box when file is printed.
//  Parameters:
//           document    -   Handle to the loaded document.
//  Return value:
//           The print page range to be used for printing.
FFI_PLUGIN_EXPORT FPDF_PAGERANGE PDFIUM_FPDF_VIEWERREF_GetPrintPageRange(FPDF_DOCUMENT document);
//  Experimental API.
//  Function: FPDF_VIEWERREF_GetPrintPageRangeCount
//           Returns the number of elements in a FPDF_PAGERANGE.
//  Parameters:
//           pagerange   -   Handle to the page range.
//  Return value:
//           The number of elements in the page range. Returns 0 on error.
FFI_PLUGIN_EXPORT size_t PDFIUM_FPDF_VIEWERREF_GetPrintPageRangeCount(FPDF_PAGERANGE pagerange);
//  Experimental API.
//  Function: FPDF_VIEWERREF_GetPrintPageRangeElement
//           Returns an element from a FPDF_PAGERANGE.
//  Parameters:
//           pagerange   -   Handle to the page range.
//           index       -   Index of the element.
//  Return value:
//           The value of the element in the page range at a given index.
//           Returns -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_VIEWERREF_GetPrintPageRangeElement(FPDF_PAGERANGE pagerange,size_t index);
//  Function: FPDF_VIEWERREF_GetDuplex
//           Returns the paper handling option to be used when printing from
//           the print dialog.
//  Parameters:
//           document    -   Handle to the loaded document.
//  Return value:
//           The paper handling option to be used when printing.
FFI_PLUGIN_EXPORT FPDF_DUPLEXTYPE PDFIUM_FPDF_VIEWERREF_GetDuplex(FPDF_DOCUMENT document);
//  Function: FPDF_VIEWERREF_GetName
//           Gets the contents for a viewer ref, with a given key. The value must
//           be of type "name".
//  Parameters:
//           document    -   Handle to the loaded document.
//           key         -   Name of the key in the viewer pref dictionary,
//                           encoded in UTF-8.
//           buffer      -   Caller-allocate buffer to receive the key, or NULL
//                       -   to query the required length.
//           length      -   Length of the buffer.
//  Return value:
//           The number of bytes in the contents, including the NULL terminator.
//           Thus if the return value is 0, then that indicates an error, such
//           as when |document| is invalid. If |length| is less than the required
//           length, or |buffer| is NULL, |buffer| will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_VIEWERREF_GetName(FPDF_DOCUMENT document,FPDF_BYTESTRING key,char * buffer,unsigned long length);
//  Function: FPDF_CountNamedDests
//           Get the count of named destinations in the PDF document.
//  Parameters:
//           document    -   Handle to a document
//  Return value:
//           The count of named destinations.
FFI_PLUGIN_EXPORT FPDF_DWORD PDFIUM_FPDF_CountNamedDests(FPDF_DOCUMENT document);
//  Function: FPDF_GetNamedDestByName
//           Get a the destination handle for the given name.
//  Parameters:
//           document    -   Handle to the loaded document.
//           name        -   The name of a destination.
//  Return value:
//           The handle to the destination.
FFI_PLUGIN_EXPORT FPDF_DEST PDFIUM_FPDF_GetNamedDestByName(FPDF_DOCUMENT document,FPDF_BYTESTRING name);
//  Function: FPDF_GetNamedDest
//           Get the named destination by index.
//  Parameters:
//           document        -   Handle to a document
//           index           -   The index of a named destination.
//           buffer          -   The buffer to store the destination name,
//                               used as wchar_t*.
//           buflen [in/out] -   Size of the buffer in bytes on input,
//                               length of the result in bytes on output
//                               or -1 if the buffer is too small.
//  Return value:
//           The destination handle for a given index, or NULL if there is no
//           named destination corresponding to |index|.
//  Comments:
//           Call this function twice to get the name of the named destination:
//             1) First time pass in |buffer| as NULL and get buflen.
//             2) Second time pass in allocated |buffer| and buflen to retrieve
//                |buffer|, which should be used as wchar_t*.
//          If buflen is not sufficiently large, it will be set to -1 upon
//          return.
FFI_PLUGIN_EXPORT FPDF_DEST PDFIUM_FPDF_GetNamedDest(FPDF_DOCUMENT document,int index,void * buffer,long * buflen);
//  Experimental API.
//  Function: FPDF_GetXFAPacketCount
//           Get the number of valid packets in the XFA entry.
//  Parameters:
//           document - Handle to the document.
//  Return value:
//           The number of valid packets, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_GetXFAPacketCount(FPDF_DOCUMENT document);
//  Experimental API.
//  Function: FPDF_GetXFAPacketName
//           Get the name of a packet in the XFA array.
//  Parameters:
//           document - Handle to the document.
//           index    - Index number of the packet. 0 for the first packet.
//           buffer   - Buffer for holding the name of the XFA packet.
//           buflen   - Length of |buffer| in bytes.
//  Return value:
//           The length of the packet name in bytes, or 0 on error.
//  |document| must be valid and |index| must be in the range [0, N), where N is
//  the value returned by FPDF_GetXFAPacketCount().
//  |buffer| is only modified if it is non-NULL and |buflen| is greater than or
//  equal to the length of the packet name. The packet name includes a
//  terminating NUL character. |buffer| is unmodified on error.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDF_GetXFAPacketName(FPDF_DOCUMENT document,int index,void * buffer,unsigned long buflen);
//  Experimental API.
//  Function: FPDF_GetXFAPacketContent
//           Get the content of a packet in the XFA array.
//  Parameters:
//           document   - Handle to the document.
//           index      - Index number of the packet. 0 for the first packet.
//           buffer     - Buffer for holding the content of the XFA packet.
//           buflen     - Length of |buffer| in bytes.
//           out_buflen - Pointer to the variable that will receive the minimum
//                        buffer size needed to contain the content of the XFA
//                        packet.
//  Return value:
//           Whether the operation succeeded or not.
//  |document| must be valid and |index| must be in the range [0, N), where N is
//  the value returned by FPDF_GetXFAPacketCount(). |out_buflen| must not be
//  NULL. When the aforementioned arguments are valid, the operation succeeds,
//  and |out_buflen| receives the content size. |buffer| is only modified if
//  |buffer| is non-null and long enough to contain the content. Callers must
//  check both the return value and the input |buflen| is no less than the
//  returned |out_buflen| before using the data in |buffer|.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_GetXFAPacketContent(FPDF_DOCUMENT document,int index,void * buffer,unsigned long buflen,unsigned long * out_buflen);
#include "pdfium/fpdf_catalog.h"
//  Experimental API.
//  Determine if |document| represents a tagged PDF.
//  For the definition of tagged PDF, See (see 10.7 "Tagged PDF" in PDF
//  Reference 1.7).
//    document - handle to a document.
//  Returns |true| iff |document| is a tagged PDF.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFCatalog_IsTagged(FPDF_DOCUMENT document);
//  Experimental API.
//  Sets the language of |document| to |language|.
//  document - handle to a document.
//  language - the language to set to.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFCatalog_SetLanguage(FPDF_DOCUMENT document,FPDF_BYTESTRING language);
#include "pdfium/fpdf_edit.h"
//  Create a new PDF document.
//  Returns a handle to a new document, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDF_CreateNewDocument();
//  Create a new PDF page.
//    document   - handle to document.
//    page_index - suggested 0-based index of the page to create. If it is larger
//                 than document's current last index(L), the created page index
//                 is the next available index -- L+1.
//    width      - the page width in points.
//    height     - the page height in points.
//  Returns the handle to the new page or NULL on failure.
//  The page should be closed with FPDF_ClosePage() when finished as
//  with any other page in the document.
FFI_PLUGIN_EXPORT FPDF_PAGE PDFIUM_FPDFPage_New(FPDF_DOCUMENT document,int page_index,double width,double height);
//  Delete the page at |page_index|.
//    document   - handle to document.
//    page_index - the index of the page to delete.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_Delete(FPDF_DOCUMENT document,int page_index);
//  Experimental API.
//  Move the given pages to a new index position.
//   page_indices     - the ordered list of pages to move. No duplicates allowed.
//   page_indices_len - the number of elements in |page_indices|
//   dest_page_index  - the new index position to which the pages in
//                      |page_indices| are moved.
//  Returns TRUE on success. If it returns FALSE, the document may be left in an
//  indeterminate state.
//  Example: The PDF document starts out with pages [A, B, C, D], with indices
//  [0, 1, 2, 3].
//  >  Move(doc, [3, 2], 2, 1); // returns true
//  >  // The document has pages [A, D, C, B].
//  >
//  >  Move(doc, [0, 4, 3], 3, 1); // returns false
//  >  // Returned false because index 4 is out of range.
//  >
//  >  Move(doc, [0, 3, 1], 3, 2); // returns false
//  >  // Returned false because index 2 is out of range for 3 page indices.
//  >
//  >  Move(doc, [2, 2], 2, 0); // returns false
//  >  // Returned false because [2, 2] contains duplicates.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDF_MovePages(FPDF_DOCUMENT document,const int * page_indices,unsigned long page_indices_len,int dest_page_index);
//  Get the rotation of |page|.
//    page - handle to a page
//  Returns one of the following indicating the page rotation:
//    0 - No rotation.
//    1 - Rotated 90 degrees clockwise.
//    2 - Rotated 180 degrees clockwise.
//    3 - Rotated 270 degrees clockwise.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_GetRotation(FPDF_PAGE page);
//  Set rotation for |page|.
//    page   - handle to a page.
//    rotate - the rotation value, one of:
//               0 - No rotation.
//               1 - Rotated 90 degrees clockwise.
//               2 - Rotated 180 degrees clockwise.
//               3 - Rotated 270 degrees clockwise.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_SetRotation(FPDF_PAGE page,int rotate);
//  Insert |page_object| into |page|.
//    page        - handle to a page
//    page_object - handle to a page object. The |page_object| will be
//                  automatically freed.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_InsertObject(FPDF_PAGE page,FPDF_PAGEOBJECT page_object);
//  Insert |page_object| into |page| at the specified |index|.
//    page        - handle to a page
//    page_object - handle to a page object as previously obtained by
//                  FPDFPageObj_CreateNew{Path|Rect}() or
//                  FPDFPageObj_New{Text|Image}Obj(). Ownership of the object
//                  is transferred back to PDFium.
//    index       - the index position to insert the object at. If index equals
//                  the current object count, the object will be appended to the
//                  end. If index is greater than the object count, the function
//                  will fail and return false.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_InsertObjectAtIndex(FPDF_PAGE page,FPDF_PAGEOBJECT page_object,size_t index);
//  Experimental API.
//  Remove |page_object| from |page|.
//    page        - handle to a page
//    page_object - handle to a page object to be removed.
//  Returns TRUE on success.
//  Ownership is transferred to the caller. Call FPDFPageObj_Destroy() to free
//  it.
//  Note that when removing a |page_object| of type FPDF_PAGEOBJ_TEXT, all
//  FPDF_TEXTPAGE handles for |page| are no longer valid.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_RemoveObject(FPDF_PAGE page,FPDF_PAGEOBJECT page_object);
//  Get number of page objects inside |page|.
//    page - handle to a page.
//  Returns the number of objects in |page|.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPage_CountObjects(FPDF_PAGE page);
//  Get object in |page| at |index|.
//    page  - handle to a page.
//    index - the index of a page object.
//  Returns the handle to the page object, or NULL on failed.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFPage_GetObject(FPDF_PAGE page,int index);
//  Checks if |page| contains transparency.
//    page - handle to a page.
//  Returns TRUE if |page| contains transparency.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_HasTransparency(FPDF_PAGE page);
//  Generate the content of |page|.
//    page - handle to a page.
//  Returns TRUE on success.
//  Before you save the page to a file, or reload the page, you must call
//  |FPDFPage_GenerateContent| or any changes to |page| will be lost.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPage_GenerateContent(FPDF_PAGE page);
//  Destroy |page_object| by releasing its resources. |page_object| must have
//  been created by FPDFPageObj_CreateNew{Path|Rect}() or
//  FPDFPageObj_New{Text|Image}Obj(). This function must be called on
//  newly-created objects if they are not added to a page through
//  FPDFPage_InsertObject() or to an annotation through FPDFAnnot_AppendObject().
//    page_object - handle to a page object.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPageObj_Destroy(FPDF_PAGEOBJECT page_object);
//  Checks if |page_object| contains transparency.
//    page_object - handle to a page object.
//  Returns TRUE if |page_object| contains transparency.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_HasTransparency(FPDF_PAGEOBJECT page_object);
//  Get type of |page_object|.
//    page_object - handle to a page object.
//  Returns one of the FPDF_PAGEOBJ_* values on success, FPDF_PAGEOBJ_UNKNOWN on
//  error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObj_GetType(FPDF_PAGEOBJECT page_object);
//  Experimental API.
//  Gets active state for |page_object| within page.
//    page_object - handle to a page object.
//    active      - pointer to variable that will receive if the page object is
//                  active. This is a required parameter. Not filled if FALSE
//                  is returned.
//  For page objects where |active| is filled with FALSE, the |page_object| is
//  treated as if it wasn't in the document even though it is still held
//  internally.
//  Returns TRUE if the operation succeeded, FALSE if it failed.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetIsActive(FPDF_PAGEOBJECT page_object,FPDF_BOOL * active);
//  Experimental API.
//  Sets if |page_object| is active within page.
//    page_object - handle to a page object.
//    active      - a boolean specifying if the object is active.
//  Returns TRUE on success.
//  Page objects all start in the active state by default, and remain in that
//  state unless this function is called.
//  When |active| is false, this makes the |page_object| be treated as if it
//  wasn't in the document even though it is still held internally.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetIsActive(FPDF_PAGEOBJECT page_object,FPDF_BOOL active);
//  Transform |page_object| by the given matrix.
//    page_object - handle to a page object.
//    a           - matrix value.
//    b           - matrix value.
//    c           - matrix value.
//    d           - matrix value.
//    e           - matrix value.
//    f           - matrix value.
//  The matrix is composed as:
//    |a c e|
//    |b d f|
//  and can be used to scale, rotate, shear and translate the |page_object|.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPageObj_Transform(FPDF_PAGEOBJECT page_object,double a,double b,double c,double d,double e,double f);
//  Experimental API.
//  Transform |page_object| by the given matrix.
//    page_object - handle to a page object.
//    matrix      - the transform matrix.
//  Returns TRUE on success.
//  This can be used to scale, rotate, shear and translate the |page_object|.
//  It is an improved version of FPDFPageObj_Transform() that does not do
//  unnecessary double to float conversions, and only uses 1 parameter for the
//  matrix. It also returns whether the operation succeeded or not.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_TransformF(FPDF_PAGEOBJECT page_object,const FS_MATRIX * matrix);
//  Experimental API.
//  Get the transform matrix of a page object.
//    page_object - handle to a page object.
//    matrix      - pointer to struct to receive the matrix value.
//  The matrix is composed as:
//    |a c e|
//    |b d f|
//  and used to scale, rotate, shear and translate the page object.
//  For page objects outside form objects, the matrix values are relative to the
//  page that contains it.
//  For page objects inside form objects, the matrix values are relative to the
//  form that contains it.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetMatrix(FPDF_PAGEOBJECT page_object,FS_MATRIX * matrix);
//  Experimental API.
//  Set the transform matrix of a page object.
//    page_object - handle to a page object.
//    matrix      - pointer to struct with the matrix value.
//  The matrix is composed as:
//    |a c e|
//    |b d f|
//  and can be used to scale, rotate, shear and translate the page object.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetMatrix(FPDF_PAGEOBJECT page_object,const FS_MATRIX * matrix);
//  Transform all annotations in |page|.
//    page - handle to a page.
//    a    - matrix value.
//    b    - matrix value.
//    c    - matrix value.
//    d    - matrix value.
//    e    - matrix value.
//    f    - matrix value.
//  The matrix is composed as:
//    |a c e|
//    |b d f|
//  and can be used to scale, rotate, shear and translate the |page| annotations.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPage_TransformAnnots(FPDF_PAGE page,double a,double b,double c,double d,double e,double f);
//  Create a new image object.
//    document - handle to a document.
//  Returns a handle to a new image object.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFPageObj_NewImageObj(FPDF_DOCUMENT document);
//  Experimental API.
//  Get the marked content ID for the object.
//    page_object - handle to a page object.
//  Returns the page object's marked content ID, or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObj_GetMarkedContentID(FPDF_PAGEOBJECT page_object);
//  Experimental API.
//  Get number of content marks in |page_object|.
//    page_object - handle to a page object.
//  Returns the number of content marks in |page_object|, or -1 in case of
//  failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObj_CountMarks(FPDF_PAGEOBJECT page_object);
//  Experimental API.
//  Get content mark in |page_object| at |index|.
//    page_object - handle to a page object.
//    index       - the index of a page object.
//  Returns the handle to the content mark, or NULL on failure. The handle is
//  still owned by the library, and it should not be freed directly. It becomes
//  invalid if the page object is destroyed, either directly or indirectly by
//  unloading the page.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECTMARK PDFIUM_FPDFPageObj_GetMark(FPDF_PAGEOBJECT page_object,unsigned long index);
//  Experimental API.
//  Add a new content mark to a |page_object|.
//    page_object - handle to a page object.
//    name        - the name (tag) of the mark.
//  Returns the handle to the content mark, or NULL on failure. The handle is
//  still owned by the library, and it should not be freed directly. It becomes
//  invalid if the page object is destroyed, either directly or indirectly by
//  unloading the page.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECTMARK PDFIUM_FPDFPageObj_AddMark(FPDF_PAGEOBJECT page_object,FPDF_BYTESTRING name);
//  Experimental API.
//  Removes a content |mark| from a |page_object|.
//  The mark handle will be invalid after the removal.
//    page_object - handle to a page object.
//    mark        - handle to a content mark in that object to remove.
//  Returns TRUE if the operation succeeded, FALSE if it failed.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_RemoveMark(FPDF_PAGEOBJECT page_object,FPDF_PAGEOBJECTMARK mark);
//  Experimental API.
//  Get the name of a content mark.
//    mark       - handle to a content mark.
//    buffer     - buffer for holding the returned name in UTF-16LE. This is only
//                 modified if |buflen| is large enough to store the name.
//                 Optional, pass null to just retrieve the size of the buffer
//                 needed.
//    buflen     - length of the buffer in bytes.
//    out_buflen - pointer to variable that will receive the minimum buffer size
//                 in bytes to contain the name. This is a required parameter.
//                 Not filled if FALSE is returned.
//  Returns TRUE if the operation succeeded, FALSE if it failed.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_GetName(FPDF_PAGEOBJECTMARK mark,FPDF_WCHAR * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Get the number of key/value pair parameters in |mark|.
//    mark   - handle to a content mark.
//  Returns the number of key/value pair parameters |mark|, or -1 in case of
//  failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObjMark_CountParams(FPDF_PAGEOBJECTMARK mark);
//  Experimental API.
//  Get the key of a property in a content mark.
//    mark       - handle to a content mark.
//    index      - index of the property.
//    buffer     - buffer for holding the returned key in UTF-16LE. This is only
//                 modified if |buflen| is large enough to store the key.
//                 Optional, pass null to just retrieve the size of the buffer
//                 needed.
//    buflen     - length of the buffer in bytes.
//    out_buflen - pointer to variable that will receive the minimum buffer size
//                 in bytes to contain the name. This is a required parameter.
//                 Not filled if FALSE is returned.
//  Returns TRUE if the operation was successful, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_GetParamKey(FPDF_PAGEOBJECTMARK mark,unsigned long index,FPDF_WCHAR * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Get the type of the value of a property in a content mark by key.
//    mark   - handle to a content mark.
//    key    - string key of the property.
//  Returns the type of the value, or FPDF_OBJECT_UNKNOWN in case of failure.
FFI_PLUGIN_EXPORT FPDF_OBJECT_TYPE PDFIUM_FPDFPageObjMark_GetParamValueType(FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key);
//  Experimental API.
//  Get the value of a number property in a content mark by key as int.
//  FPDFPageObjMark_GetParamValueType() should have returned FPDF_OBJECT_NUMBER
//  for this property.
//    mark      - handle to a content mark.
//    key       - string key of the property.
//    out_value - pointer to variable that will receive the value. Not filled if
//                false is returned.
//  Returns TRUE if the key maps to a number value, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_GetParamIntValue(FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key,int * out_value);
//  Experimental API.
//  Get the value of a string property in a content mark by key.
//    mark       - handle to a content mark.
//    key        - string key of the property.
//    buffer     - buffer for holding the returned value in UTF-16LE. This is
//                 only modified if |buflen| is large enough to store the value.
//                 Optional, pass null to just retrieve the size of the buffer
//                 needed.
//    buflen     - length of the buffer in bytes.
//    out_buflen - pointer to variable that will receive the minimum buffer size
//                 in bytes to contain the name. This is a required parameter.
//                 Not filled if FALSE is returned.
//  Returns TRUE if the key maps to a string/blob value, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_GetParamStringValue(FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key,FPDF_WCHAR * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Get the value of a blob property in a content mark by key.
//    mark       - handle to a content mark.
//    key        - string key of the property.
//    buffer     - buffer for holding the returned value. This is only modified
//                 if |buflen| is large enough to store the value.
//                 Optional, pass null to just retrieve the size of the buffer
//                 needed.
//    buflen     - length of the buffer in bytes.
//    out_buflen - pointer to variable that will receive the minimum buffer size
//                 in bytes to contain the name. This is a required parameter.
//                 Not filled if FALSE is returned.
//  Returns TRUE if the key maps to a string/blob value, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_GetParamBlobValue(FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key,unsigned char * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Set the value of an int property in a content mark by key. If a parameter
//  with key |key| exists, its value is set to |value|. Otherwise, it is added as
//  a new parameter.
//    document    - handle to the document.
//    page_object - handle to the page object with the mark.
//    mark        - handle to a content mark.
//    key         - string key of the property.
//    value       - int value to set.
//  Returns TRUE if the operation succeeded, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_SetIntParam(FPDF_DOCUMENT document,FPDF_PAGEOBJECT page_object,FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key,int value);
//  Experimental API.
//  Set the value of a string property in a content mark by key. If a parameter
//  with key |key| exists, its value is set to |value|. Otherwise, it is added as
//  a new parameter.
//    document    - handle to the document.
//    page_object - handle to the page object with the mark.
//    mark        - handle to a content mark.
//    key         - string key of the property.
//    value       - string value to set.
//  Returns TRUE if the operation succeeded, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_SetStringParam(FPDF_DOCUMENT document,FPDF_PAGEOBJECT page_object,FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key,FPDF_BYTESTRING value);
//  Experimental API.
//  Set the value of a blob property in a content mark by key. If a parameter
//  with key |key| exists, its value is set to |value|. Otherwise, it is added as
//  a new parameter.
//    document    - handle to the document.
//    page_object - handle to the page object with the mark.
//    mark        - handle to a content mark.
//    key         - string key of the property.
//    value       - pointer to blob value to set.
//    value_len   - size in bytes of |value|.
//  Returns TRUE if the operation succeeded, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_SetBlobParam(FPDF_DOCUMENT document,FPDF_PAGEOBJECT page_object,FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key,const unsigned char * value,unsigned long value_len);
//  Experimental API.
//  Removes a property from a content mark by key.
//    page_object - handle to the page object with the mark.
//    mark        - handle to a content mark.
//    key         - string key of the property.
//  Returns TRUE if the operation succeeded, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObjMark_RemoveParam(FPDF_PAGEOBJECT page_object,FPDF_PAGEOBJECTMARK mark,FPDF_BYTESTRING key);
//  Load an image from a JPEG image file and then set it into |image_object|.
//    pages        - pointer to the start of all loaded pages, may be NULL.
//    count        - number of |pages|, may be 0.
//    image_object - handle to an image object.
//    file_access  - file access handler which specifies the JPEG image file.
//  Returns TRUE on success.
//  The image object might already have an associated image, which is shared and
//  cached by the loaded pages. In that case, we need to clear the cached image
//  for all the loaded pages. Pass |pages| and page count (|count|) to this API
//  to clear the image cache. If the image is not previously shared, or NULL is a
//  valid |pages| value.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_LoadJpegFile(FPDF_PAGE * pages,int count,FPDF_PAGEOBJECT image_object,FPDF_FILEACCESS * file_access);
//  Load an image from a JPEG image file and then set it into |image_object|.
//    pages        - pointer to the start of all loaded pages, may be NULL.
//    count        - number of |pages|, may be 0.
//    image_object - handle to an image object.
//    file_access  - file access handler which specifies the JPEG image file.
//  Returns TRUE on success.
//  The image object might already have an associated image, which is shared and
//  cached by the loaded pages. In that case, we need to clear the cached image
//  for all the loaded pages. Pass |pages| and page count (|count|) to this API
//  to clear the image cache. If the image is not previously shared, or NULL is a
//  valid |pages| value. This function loads the JPEG image inline, so the image
//  content is copied to the file. This allows |file_access| and its associated
//  data to be deleted after this function returns.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_LoadJpegFileInline(FPDF_PAGE * pages,int count,FPDF_PAGEOBJECT image_object,FPDF_FILEACCESS * file_access);
//  TODO(thestig): Start deprecating this once FPDFPageObj_SetMatrix() is stable.
//  Set the transform matrix of |image_object|.
//    image_object - handle to an image object.
//    a            - matrix value.
//    b            - matrix value.
//    c            - matrix value.
//    d            - matrix value.
//    e            - matrix value.
//    f            - matrix value.
//  The matrix is composed as:
//    |a c e|
//    |b d f|
//  and can be used to scale, rotate, shear and translate the |image_object|.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_SetMatrix(FPDF_PAGEOBJECT image_object,double a,double b,double c,double d,double e,double f);
//  Set |bitmap| to |image_object|.
//    pages        - pointer to the start of all loaded pages, may be NULL.
//    count        - number of |pages|, may be 0.
//    image_object - handle to an image object.
//    bitmap       - handle of the bitmap.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_SetBitmap(FPDF_PAGE * pages,int count,FPDF_PAGEOBJECT image_object,FPDF_BITMAP bitmap);
//  Get a bitmap rasterization of |image_object|. FPDFImageObj_GetBitmap() only
//  operates on |image_object| and does not take the associated image mask into
//  account. It also ignores the matrix for |image_object|.
//  The returned bitmap will be owned by the caller, and FPDFBitmap_Destroy()
//  must be called on the returned bitmap when it is no longer needed.
//    image_object - handle to an image object.
//  Returns the bitmap.
FFI_PLUGIN_EXPORT FPDF_BITMAP PDFIUM_FPDFImageObj_GetBitmap(FPDF_PAGEOBJECT image_object);
//  Experimental API.
//  Get a bitmap rasterization of |image_object| that takes the image mask and
//  image matrix into account. To render correctly, the caller must provide the
//  |document| associated with |image_object|. If there is a |page| associated
//  with |image_object|, the caller should provide that as well.
//  The returned bitmap will be owned by the caller, and FPDFBitmap_Destroy()
//  must be called on the returned bitmap when it is no longer needed.
//    document     - handle to a document associated with |image_object|.
//    page         - handle to an optional page associated with |image_object|.
//    image_object - handle to an image object.
//  Returns the bitmap or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_BITMAP PDFIUM_FPDFImageObj_GetRenderedBitmap(FPDF_DOCUMENT document,FPDF_PAGE page,FPDF_PAGEOBJECT image_object);
//  Get the decoded image data of |image_object|. The decoded data is the
//  uncompressed image data, i.e. the raw image data after having all filters
//  applied. |buffer| is only modified if |buflen| is longer than the length of
//  the decoded image data.
//    image_object - handle to an image object.
//    buffer       - buffer for holding the decoded image data.
//    buflen       - length of the buffer in bytes.
//  Returns the length of the decoded image data.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFImageObj_GetImageDataDecoded(FPDF_PAGEOBJECT image_object,void * buffer,unsigned long buflen);
//  Get the raw image data of |image_object|. The raw data is the image data as
//  stored in the PDF without applying any filters. |buffer| is only modified if
//  |buflen| is longer than the length of the raw image data.
//    image_object - handle to an image object.
//    buffer       - buffer for holding the raw image data.
//    buflen       - length of the buffer in bytes.
//  Returns the length of the raw image data.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFImageObj_GetImageDataRaw(FPDF_PAGEOBJECT image_object,void * buffer,unsigned long buflen);
//  Get the number of filters (i.e. decoders) of the image in |image_object|.
//    image_object - handle to an image object.
//  Returns the number of |image_object|'s filters.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFImageObj_GetImageFilterCount(FPDF_PAGEOBJECT image_object);
//  Get the filter at |index| of |image_object|'s list of filters. Note that the
//  filters need to be applied in order, i.e. the first filter should be applied
//  first, then the second, etc. |buffer| is only modified if |buflen| is longer
//  than the length of the filter string.
//    image_object - handle to an image object.
//    index        - the index of the filter requested.
//    buffer       - buffer for holding filter string, encoded in UTF-8.
//    buflen       - length of the buffer.
//  Returns the length of the filter string.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFImageObj_GetImageFilter(FPDF_PAGEOBJECT image_object,int index,void * buffer,unsigned long buflen);
//  Get the image metadata of |image_object|, including dimension, DPI, bits per
//  pixel, and colorspace. If the |image_object| is not an image object or if it
//  does not have an image, then the return value will be false. Otherwise,
//  failure to retrieve any specific parameter would result in its value being 0.
//    image_object - handle to an image object.
//    page         - handle to the page that |image_object| is on. Required for
//                   retrieving the image's bits per pixel and colorspace.
//    metadata     - receives the image metadata; must not be NULL.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_GetImageMetadata(FPDF_PAGEOBJECT image_object,FPDF_PAGE page,FPDF_IMAGEOBJ_METADATA * metadata);
//  Experimental API.
//  Get the image size in pixels. Faster method to get only image size.
//    image_object - handle to an image object.
//    width        - receives the image width in pixels; must not be NULL.
//    height       - receives the image height in pixels; must not be NULL.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_GetImagePixelSize(FPDF_PAGEOBJECT image_object,unsigned int * width,unsigned int * height);
//  Experimental API.
//  Get ICC profile decoded data of |image_object|. If the |image_object| is not
//  an image object or if it does not have an image, then the return value will
//  be false. It also returns false if the |image_object| has no ICC profile.
//  |buffer| is only modified if ICC profile exists and |buflen| is longer than
//  the length of the ICC profile decoded data.
//    image_object - handle to an image object; must not be NULL.
//    page         - handle to the page containing |image_object|; must not be
//                   NULL. Required for retrieving the image's colorspace.
//    buffer       - Buffer to receive ICC profile data; may be NULL if querying
//                   required size via |out_buflen|.
//    buflen       - Length of the buffer in bytes. Ignored if |buffer| is NULL.
//    out_buflen   - Pointer to receive the ICC profile data size in bytes; must
//                   not be NULL. Will be set if this API returns true.
//  Returns true if |out_buflen| is not null and an ICC profile exists for the
//  given |image_object|.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFImageObj_GetIccProfileDataDecoded(FPDF_PAGEOBJECT image_object,FPDF_PAGE page,uint8_t * buffer,size_t buflen,size_t * out_buflen);
//  Create a new path object at an initial position.
//    x - initial horizontal position.
//    y - initial vertical position.
//  Returns a handle to a new path object.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFPageObj_CreateNewPath(float x,float y);
//  Create a closed path consisting of a rectangle.
//    x - horizontal position for the left boundary of the rectangle.
//    y - vertical position for the bottom boundary of the rectangle.
//    w - width of the rectangle.
//    h - height of the rectangle.
//  Returns a handle to the new path object.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFPageObj_CreateNewRect(float x,float y,float w,float h);
//  Get the bounding box of |page_object|.
//  page_object  - handle to a page object.
//  left         - pointer where the left coordinate will be stored
//  bottom       - pointer where the bottom coordinate will be stored
//  right        - pointer where the right coordinate will be stored
//  top          - pointer where the top coordinate will be stored
//  On success, returns TRUE and fills in the 4 coordinates.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetBounds(FPDF_PAGEOBJECT page_object,float * left,float * bottom,float * right,float * top);
//  Experimental API.
//  Get the quad points that bounds |page_object|.
//  page_object  - handle to a page object.
//  quad_points  - pointer where the quadrilateral points will be stored.
//  On success, returns TRUE and fills in |quad_points|.
//  Similar to FPDFPageObj_GetBounds(), this returns the bounds of a page
//  object. When the object is rotated by a non-multiple of 90 degrees, this API
//  returns a tighter bound that cannot be represented with just the 4 sides of
//  a rectangle.
//  Currently only works the following |page_object| types: FPDF_PAGEOBJ_TEXT and
//  FPDF_PAGEOBJ_IMAGE.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetRotatedBounds(FPDF_PAGEOBJECT page_object,FS_QUADPOINTSF * quad_points);
//  Set the blend mode of |page_object|.
//  page_object  - handle to a page object.
//  blend_mode   - string containing the blend mode.
//  Blend mode can be one of following: Color, ColorBurn, ColorDodge, Darken,
//  Difference, Exclusion, HardLight, Hue, Lighten, Luminosity, Multiply, Normal,
//  Overlay, Saturation, Screen, SoftLight
FFI_PLUGIN_EXPORT void PDFIUM_FPDFPageObj_SetBlendMode(FPDF_PAGEOBJECT page_object,FPDF_BYTESTRING blend_mode);
//  Set the stroke RGBA of a page object. Range of values: 0 - 255.
//  page_object  - the handle to the page object.
//  R            - the red component for the object's stroke color.
//  G            - the green component for the object's stroke color.
//  B            - the blue component for the object's stroke color.
//  A            - the stroke alpha for the object.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetStrokeColor(FPDF_PAGEOBJECT page_object,unsigned int R,unsigned int G,unsigned int B,unsigned int A);
//  Get the stroke RGBA of a page object. Range of values: 0 - 255.
//  page_object  - the handle to the page object.
//  R            - the red component of the path stroke color.
//  G            - the green component of the object's stroke color.
//  B            - the blue component of the object's stroke color.
//  A            - the stroke alpha of the object.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetStrokeColor(FPDF_PAGEOBJECT page_object,unsigned int * R,unsigned int * G,unsigned int * B,unsigned int * A);
//  Set the stroke width of a page object.
//  path   - the handle to the page object.
//  width  - the width of the stroke.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetStrokeWidth(FPDF_PAGEOBJECT page_object,float width);
//  Get the stroke width of a page object.
//  path   - the handle to the page object.
//  width  - the width of the stroke.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetStrokeWidth(FPDF_PAGEOBJECT page_object,float * width);
//  Get the line join of |page_object|.
//  page_object  - handle to a page object.
//  Returns the line join, or -1 on failure.
//  Line join can be one of following: FPDF_LINEJOIN_MITER, FPDF_LINEJOIN_ROUND,
//  FPDF_LINEJOIN_BEVEL
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObj_GetLineJoin(FPDF_PAGEOBJECT page_object);
//  Set the line join of |page_object|.
//  page_object  - handle to a page object.
//  line_join    - line join
//  Line join can be one of following: FPDF_LINEJOIN_MITER, FPDF_LINEJOIN_ROUND,
//  FPDF_LINEJOIN_BEVEL
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetLineJoin(FPDF_PAGEOBJECT page_object,int line_join);
//  Get the line cap of |page_object|.
//  page_object - handle to a page object.
//  Returns the line cap, or -1 on failure.
//  Line cap can be one of following: FPDF_LINECAP_BUTT, FPDF_LINECAP_ROUND,
//  FPDF_LINECAP_PROJECTING_SQUARE
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObj_GetLineCap(FPDF_PAGEOBJECT page_object);
//  Set the line cap of |page_object|.
//  page_object - handle to a page object.
//  line_cap    - line cap
//  Line cap can be one of following: FPDF_LINECAP_BUTT, FPDF_LINECAP_ROUND,
//  FPDF_LINECAP_PROJECTING_SQUARE
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetLineCap(FPDF_PAGEOBJECT page_object,int line_cap);
//  Set the fill RGBA of a page object. Range of values: 0 - 255.
//  page_object  - the handle to the page object.
//  R            - the red component for the object's fill color.
//  G            - the green component for the object's fill color.
//  B            - the blue component for the object's fill color.
//  A            - the fill alpha for the object.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetFillColor(FPDF_PAGEOBJECT page_object,unsigned int R,unsigned int G,unsigned int B,unsigned int A);
//  Get the fill RGBA of a page object. Range of values: 0 - 255.
//  page_object  - the handle to the page object.
//  R            - the red component of the object's fill color.
//  G            - the green component of the object's fill color.
//  B            - the blue component of the object's fill color.
//  A            - the fill alpha of the object.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetFillColor(FPDF_PAGEOBJECT page_object,unsigned int * R,unsigned int * G,unsigned int * B,unsigned int * A);
//  Experimental API.
//  Get the line dash |phase| of |page_object|.
//  page_object - handle to a page object.
//  phase - pointer where the dashing phase will be stored.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetDashPhase(FPDF_PAGEOBJECT page_object,float * phase);
//  Experimental API.
//  Set the line dash phase of |page_object|.
//  page_object - handle to a page object.
//  phase - line dash phase.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetDashPhase(FPDF_PAGEOBJECT page_object,float phase);
//  Experimental API.
//  Get the line dash array of |page_object|.
//  page_object - handle to a page object.
//  Returns the line dash array size or -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPageObj_GetDashCount(FPDF_PAGEOBJECT page_object);
//  Experimental API.
//  Get the line dash array of |page_object|.
//  page_object - handle to a page object.
//  dash_array - pointer where the dashing array will be stored.
//  dash_count - number of elements in |dash_array|.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_GetDashArray(FPDF_PAGEOBJECT page_object,float * dash_array,size_t dash_count);
//  Experimental API.
//  Set the line dash array of |page_object|.
//  page_object - handle to a page object.
//  dash_array - the dash array.
//  dash_count - number of elements in |dash_array|.
//  phase - the line dash phase.
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPageObj_SetDashArray(FPDF_PAGEOBJECT page_object,const float * dash_array,size_t dash_count,float phase);
//  Get number of segments inside |path|.
//    path - handle to a path.
//  A segment is a command, created by e.g. FPDFPath_MoveTo(),
//  FPDFPath_LineTo() or FPDFPath_BezierTo().
//  Returns the number of objects in |path| or -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPath_CountSegments(FPDF_PAGEOBJECT path);
//  Get segment in |path| at |index|.
//    path  - handle to a path.
//    index - the index of a segment.
//  Returns the handle to the segment, or NULL on faiure.
FFI_PLUGIN_EXPORT FPDF_PATHSEGMENT PDFIUM_FPDFPath_GetPathSegment(FPDF_PAGEOBJECT path,int index);
//  Get coordinates of |segment|.
//    segment  - handle to a segment.
//    x      - the horizontal position of the segment.
//    y      - the vertical position of the segment.
//  Returns TRUE on success, otherwise |x| and |y| is not set.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPathSegment_GetPoint(FPDF_PATHSEGMENT segment,float * x,float * y);
//  Get type of |segment|.
//    segment - handle to a segment.
//  Returns one of the FPDF_SEGMENT_* values on success,
//  FPDF_SEGMENT_UNKNOWN on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFPathSegment_GetType(FPDF_PATHSEGMENT segment);
//  Gets if the |segment| closes the current subpath of a given path.
//    segment - handle to a segment.
//  Returns close flag for non-NULL segment, FALSE otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPathSegment_GetClose(FPDF_PATHSEGMENT segment);
//  Move a path's current point.
//  path   - the handle to the path object.
//  x      - the horizontal position of the new current point.
//  y      - the vertical position of the new current point.
//  Note that no line will be created between the previous current point and the
//  new one.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPath_MoveTo(FPDF_PAGEOBJECT path,float x,float y);
//  Add a line between the current point and a new point in the path.
//  path   - the handle to the path object.
//  x      - the horizontal position of the new point.
//  y      - the vertical position of the new point.
//  The path's current point is changed to (x, y).
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPath_LineTo(FPDF_PAGEOBJECT path,float x,float y);
//  Add a cubic Bezier curve to the given path, starting at the current point.
//  path   - the handle to the path object.
//  x1     - the horizontal position of the first Bezier control point.
//  y1     - the vertical position of the first Bezier control point.
//  x2     - the horizontal position of the second Bezier control point.
//  y2     - the vertical position of the second Bezier control point.
//  x3     - the horizontal position of the ending point of the Bezier curve.
//  y3     - the vertical position of the ending point of the Bezier curve.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPath_BezierTo(FPDF_PAGEOBJECT path,float x1,float y1,float x2,float y2,float x3,float y3);
//  Close the current subpath of a given path.
//  path   - the handle to the path object.
//  This will add a line between the current point and the initial point of the
//  subpath, thus terminating the current subpath.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPath_Close(FPDF_PAGEOBJECT path);
//  Set the drawing mode of a path.
//  path     - the handle to the path object.
//  fillmode - the filling mode to be set: one of the FPDF_FILLMODE_* flags.
//  stroke   - a boolean specifying if the path should be stroked or not.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPath_SetDrawMode(FPDF_PAGEOBJECT path,int fillmode,FPDF_BOOL stroke);
//  Get the drawing mode of a path.
//  path     - the handle to the path object.
//  fillmode - the filling mode of the path: one of the FPDF_FILLMODE_* flags.
//  stroke   - a boolean specifying if the path is stroked or not.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFPath_GetDrawMode(FPDF_PAGEOBJECT path,int * fillmode,FPDF_BOOL * stroke);
//  Create a new text object using one of the standard PDF fonts.
//  document   - handle to the document.
//  font       - string containing the font name, without spaces.
//  font_size  - the font size for the new text object.
//  Returns a handle to a new text object, or NULL on failure
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFPageObj_NewTextObj(FPDF_DOCUMENT document,FPDF_BYTESTRING font,float font_size);
//  Set the text for a text object. If it had text, it will be replaced.
//  text_object  - handle to the text object.
//  text         - the UTF-16LE encoded string containing the text to be added.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_SetText(FPDF_PAGEOBJECT text_object,FPDF_WIDESTRING text);
//  Experimental API.
//  Set the text using charcodes for a text object. If it had text, it will be
//  replaced.
//  text_object  - handle to the text object.
//  charcodes    - pointer to an array of charcodes to be added.
//  count        - number of elements in |charcodes|.
//  Returns TRUE on success
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_SetCharcodes(FPDF_PAGEOBJECT text_object,const uint32_t * charcodes,size_t count);
//  Returns a font object loaded from a stream of data. The font is loaded
//  into the document. Various font data structures, such as the ToUnicode data,
//  are auto-generated based on the inputs.
//  document  - handle to the document.
//  data      - the stream of font data, which will be copied by the font object.
//  size      - the size of the font data, in bytes.
//  font_type - FPDF_FONT_TYPE1 or FPDF_FONT_TRUETYPE depending on the font type.
//  cid       - a boolean specifying if the font is a CID font or not.
//  The loaded font can be closed using FPDFFont_Close().
//  Returns NULL on failure
FFI_PLUGIN_EXPORT FPDF_FONT PDFIUM_FPDFText_LoadFont(FPDF_DOCUMENT document,const uint8_t * data,uint32_t size,int font_type,FPDF_BOOL cid);
//  Experimental API.
//  Loads one of the standard 14 fonts per PDF spec 1.7 page 416. The preferred
//  way of using font style is using a dash to separate the name from the style,
//  for example 'Helvetica-BoldItalic'.
//  document   - handle to the document.
//  font       - string containing the font name, without spaces.
//  The loaded font can be closed using FPDFFont_Close().
//  Returns NULL on failure.
FFI_PLUGIN_EXPORT FPDF_FONT PDFIUM_FPDFText_LoadStandardFont(FPDF_DOCUMENT document,FPDF_BYTESTRING font);
//  Experimental API.
//  Returns a font object loaded from a stream of data for a type 2 CID font. The
//  font is loaded into the document. Unlike FPDFText_LoadFont(), the ToUnicode
//  data and the CIDToGIDMap data are caller provided, instead of auto-generated.
//  document                 - handle to the document.
//  font_data                - the stream of font data, which will be copied by
//                             the font object.
//  font_data_size           - the size of the font data, in bytes.
//  to_unicode_cmap          - the ToUnicode data.
//  cid_to_gid_map_data      - the stream of CIDToGIDMap data.
//  cid_to_gid_map_data_size - the size of the CIDToGIDMap data, in bytes.
//  The loaded font can be closed using FPDFFont_Close().
//  Returns NULL on failure.
FFI_PLUGIN_EXPORT FPDF_FONT PDFIUM_FPDFText_LoadCidType2Font(FPDF_DOCUMENT document,const uint8_t * font_data,uint32_t font_data_size,FPDF_BYTESTRING to_unicode_cmap,const uint8_t * cid_to_gid_map_data,uint32_t cid_to_gid_map_data_size);
//  Get the font size of a text object.
//    text - handle to a text.
//    size - pointer to the font size of the text object, measured in points
//    (about 1/72 inch)
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFTextObj_GetFontSize(FPDF_PAGEOBJECT text,float * size);
//  Close a loaded PDF font.
//  font   - Handle to the loaded font.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFFont_Close(FPDF_FONT font);
//  Create a new text object using a loaded font.
//  document   - handle to the document.
//  font       - handle to the font object.
//  font_size  - the font size for the new text object.
//  Returns a handle to a new text object, or NULL on failure
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFPageObj_CreateTextObj(FPDF_DOCUMENT document,FPDF_FONT font,float font_size);
//  Get the text rendering mode of a text object.
//  text     - the handle to the text object.
//  Returns one of the known FPDF_TEXT_RENDERMODE enum values on success,
//  FPDF_TEXTRENDERMODE_UNKNOWN on error.
FFI_PLUGIN_EXPORT FPDF_TEXT_RENDERMODE PDFIUM_FPDFTextObj_GetTextRenderMode(FPDF_PAGEOBJECT text);
//  Experimental API.
//  Set the text rendering mode of a text object.
//  text         - the handle to the text object.
//  render_mode  - the FPDF_TEXT_RENDERMODE enum value to be set (cannot set to
//                 FPDF_TEXTRENDERMODE_UNKNOWN).
//  Returns TRUE on success.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFTextObj_SetTextRenderMode(FPDF_PAGEOBJECT text,FPDF_TEXT_RENDERMODE render_mode);
//  Get the text of a text object.
//  text_object      - the handle to the text object.
//  text_page        - the handle to the text page.
//  buffer           - the address of a buffer that receives the text.
//  length           - the size, in bytes, of |buffer|.
//  Returns the number of bytes in the text (including the trailing NUL
//  character) on success, 0 on error.
//  Regardless of the platform, the |buffer| is always in UTF-16LE encoding.
//  If |length| is less than the returned length, or |buffer| is NULL, |buffer|
//  will not be modified.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFTextObj_GetText(FPDF_PAGEOBJECT text_object,FPDF_TEXTPAGE text_page,FPDF_WCHAR * buffer,unsigned long length);
//  Experimental API.
//  Get a bitmap rasterization of |text_object|. To render correctly, the caller
//  must provide the |document| associated with |text_object|. If there is a
//  |page| associated with |text_object|, the caller should provide that as well.
//  The returned bitmap will be owned by the caller, and FPDFBitmap_Destroy()
//  must be called on the returned bitmap when it is no longer needed.
//    document    - handle to a document associated with |text_object|.
//    page        - handle to an optional page associated with |text_object|.
//    text_object - handle to a text object.
//    scale       - the scaling factor, which must be greater than 0.
//  Returns the bitmap or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_BITMAP PDFIUM_FPDFTextObj_GetRenderedBitmap(FPDF_DOCUMENT document,FPDF_PAGE page,FPDF_PAGEOBJECT text_object,float scale);
//  Experimental API.
//  Get the font of a text object.
//  text - the handle to the text object.
//  Returns a handle to the font object held by |text| which retains ownership.
FFI_PLUGIN_EXPORT FPDF_FONT PDFIUM_FPDFTextObj_GetFont(FPDF_PAGEOBJECT text);
//  Experimental API.
//  Get the base name of a font.
//  font   - the handle to the font object.
//  buffer - the address of a buffer that receives the base font name.
//  length - the size, in bytes, of |buffer|.
//  Returns the number of bytes in the base name (including the trailing NUL
//  character) on success, 0 on error. The base name is typically the font's
//  PostScript name. See descriptions of "BaseFont" in ISO 32000-1:2008 spec.
//  Regardless of the platform, the |buffer| is always in UTF-8 encoding.
//  If |length| is less than the returned length, or |buffer| is NULL, |buffer|
//  will not be modified.
FFI_PLUGIN_EXPORT size_t PDFIUM_FPDFFont_GetBaseFontName(FPDF_FONT font,char * buffer,size_t length);
//  Experimental API.
//  Get the family name of a font.
//  font   - the handle to the font object.
//  buffer - the address of a buffer that receives the font name.
//  length - the size, in bytes, of |buffer|.
//  Returns the number of bytes in the family name (including the trailing NUL
//  character) on success, 0 on error.
//  Regardless of the platform, the |buffer| is always in UTF-8 encoding.
//  If |length| is less than the returned length, or |buffer| is NULL, |buffer|
//  will not be modified.
FFI_PLUGIN_EXPORT size_t PDFIUM_FPDFFont_GetFamilyName(FPDF_FONT font,char * buffer,size_t length);
//  Experimental API.
//  Get the decoded data from the |font| object.
//  font       - The handle to the font object. (Required)
//  buffer     - The address of a buffer that receives the font data.
//  buflen     - Length of the buffer.
//  out_buflen - Pointer to variable that will receive the minimum buffer size
//               to contain the font data. Not filled if the return value is
//               FALSE. (Required)
//  Returns TRUE on success. In which case, |out_buflen| will be filled, and
//  |buffer| will be filled if it is large enough. Returns FALSE if any of the
//  required parameters are null.
//  The decoded data is the uncompressed font data. i.e. the raw font data after
//  having all stream filters applied, when the data is embedded.
//  If the font is not embedded, then this API will instead return the data for
//  the substitution font it is using.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFFont_GetFontData(FPDF_FONT font,uint8_t * buffer,size_t buflen,size_t * out_buflen);
//  Experimental API.
//  Get whether |font| is embedded or not.
//  font - the handle to the font object.
//  Returns 1 if the font is embedded, 0 if it not, and -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFFont_GetIsEmbedded(FPDF_FONT font);
//  Experimental API.
//  Get the descriptor flags of a font.
//  font - the handle to the font object.
//  Returns the bit flags specifying various characteristics of the font as
//  defined in ISO 32000-1:2008, table 123, -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFFont_GetFlags(FPDF_FONT font);
//  Experimental API.
//  Get the font weight of a font.
//  font - the handle to the font object.
//  Returns the font weight, -1 on failure.
//  Typical values are 400 (normal) and 700 (bold).
FFI_PLUGIN_EXPORT int PDFIUM_FPDFFont_GetWeight(FPDF_FONT font);
//  Experimental API.
//  Get the italic angle of a font.
//  font  - the handle to the font object.
//  angle - pointer where the italic angle will be stored
//  The italic angle of a |font| is defined as degrees counterclockwise
//  from vertical. For a font that slopes to the right, this will be negative.
//  Returns TRUE on success; |angle| unmodified on failure.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFFont_GetItalicAngle(FPDF_FONT font,int * angle);
//  Experimental API.
//  Get ascent distance of a font.
//  font       - the handle to the font object.
//  font_size  - the size of the |font|.
//  ascent     - pointer where the font ascent will be stored
//  Ascent is the maximum distance in points above the baseline reached by the
//  glyphs of the |font|. One point is 1/72 inch (around 0.3528 mm).
//  Returns TRUE on success; |ascent| unmodified on failure.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFFont_GetAscent(FPDF_FONT font,float font_size,float * ascent);
//  Experimental API.
//  Get descent distance of a font.
//  font       - the handle to the font object.
//  font_size  - the size of the |font|.
//  descent    - pointer where the font descent will be stored
//  Descent is the maximum distance in points below the baseline reached by the
//  glyphs of the |font|. One point is 1/72 inch (around 0.3528 mm).
//  Returns TRUE on success; |descent| unmodified on failure.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFFont_GetDescent(FPDF_FONT font,float font_size,float * descent);
//  Experimental API.
//  Get the width of a glyph in a font.
//  font       - the handle to the font object.
//  glyph      - the glyph.
//  font_size  - the size of the font.
//  width      - pointer where the glyph width will be stored
//  Glyph width is the distance from the end of the prior glyph to the next
//  glyph. This will be the vertical distance for vertical writing.
//  Returns TRUE on success; |width| unmodified on failure.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFFont_GetGlyphWidth(FPDF_FONT font,uint32_t glyph,float font_size,float * width);
//  Experimental API.
//  Get the glyphpath describing how to draw a font glyph.
//  font       - the handle to the font object.
//  glyph      - the glyph being drawn.
//  font_size  - the size of the font.
//  Returns the handle to the segment, or NULL on faiure.
FFI_PLUGIN_EXPORT FPDF_GLYPHPATH PDFIUM_FPDFFont_GetGlyphPath(FPDF_FONT font,uint32_t glyph,float font_size);
//  Experimental API.
//  Get number of segments inside glyphpath.
//  glyphpath - handle to a glyph path.
//  Returns the number of objects in |glyphpath| or -1 on failure.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFGlyphPath_CountGlyphSegments(FPDF_GLYPHPATH glyphpath);
//  Experimental API.
//  Get segment in glyphpath at index.
//  glyphpath  - handle to a glyph path.
//  index      - the index of a segment.
//  Returns the handle to the segment, or NULL on faiure.
FFI_PLUGIN_EXPORT FPDF_PATHSEGMENT PDFIUM_FPDFGlyphPath_GetGlyphPathSegment(FPDF_GLYPHPATH glyphpath,int index);
//  Get number of page objects inside |form_object|.
//    form_object - handle to a form object.
//  Returns the number of objects in |form_object| on success, -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFFormObj_CountObjects(FPDF_PAGEOBJECT form_object);
//  Get page object in |form_object| at |index|.
//    form_object - handle to a form object.
//    index       - the 0-based index of a page object.
//  Returns the handle to the page object, or NULL on error.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFFormObj_GetObject(FPDF_PAGEOBJECT form_object,unsigned long index);
//  Experimental API.
//  Remove |page_object| from |form_object|.
//    form_object - handle to a form object.
//    page_object - handle to a page object to be removed from the form.
//  Returns TRUE on success.
//  Ownership of the removed |page_object| is transferred to the caller.
//  Call FPDFPageObj_Destroy() on the removed page_object to free it.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFFormObj_RemoveObject(FPDF_PAGEOBJECT form_object,FPDF_PAGEOBJECT page_object);
#include "pdfium/fpdf_thumbnail.h"
//  Experimental API.
//  Gets the decoded data from the thumbnail of |page| if it exists.
//  This only modifies |buffer| if |buflen| less than or equal to the
//  size of the decoded data. Returns the size of the decoded
//  data or 0 if thumbnail DNE. Optional, pass null to just retrieve
//  the size of the buffer needed.
//    page    - handle to a page.
//    buffer  - buffer for holding the decoded image data.
//    buflen  - length of the buffer in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFPage_GetDecodedThumbnailData(FPDF_PAGE page,void * buffer,unsigned long buflen);
//  Experimental API.
//  Gets the raw data from the thumbnail of |page| if it exists.
//  This only modifies |buffer| if |buflen| is less than or equal to
//  the size of the raw data. Returns the size of the raw data or 0
//  if thumbnail DNE. Optional, pass null to just retrieve the size
//  of the buffer needed.
//    page    - handle to a page.
//    buffer  - buffer for holding the raw image data.
//    buflen  - length of the buffer in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFPage_GetRawThumbnailData(FPDF_PAGE page,void * buffer,unsigned long buflen);
//  Experimental API.
//  Returns the thumbnail of |page| as a FPDF_BITMAP. Returns a nullptr
//  if unable to access the thumbnail's stream.
//    page - handle to a page.
FFI_PLUGIN_EXPORT FPDF_BITMAP PDFIUM_FPDFPage_GetThumbnailAsBitmap(FPDF_PAGE page);
#include "pdfium/fpdf_javascript.h"
//  Experimental API.
//  Get the number of JavaScript actions in |document|.
//    document - handle to a document.
//  Returns the number of JavaScript actions in |document| or -1 on error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFDoc_GetJavaScriptActionCount(FPDF_DOCUMENT document);
//  Experimental API.
//  Get the JavaScript action at |index| in |document|.
//    document - handle to a document.
//    index    - the index of the requested JavaScript action.
//  Returns the handle to the JavaScript action, or NULL on failure.
//  Caller owns the returned handle and must close it with
//  FPDFDoc_CloseJavaScriptAction().
FFI_PLUGIN_EXPORT FPDF_JAVASCRIPT_ACTION PDFIUM_FPDFDoc_GetJavaScriptAction(FPDF_DOCUMENT document,int index);
//    javascript - Handle to a JavaScript action.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFDoc_CloseJavaScriptAction(FPDF_JAVASCRIPT_ACTION javascript);
//  Experimental API.
//  Get the name from the |javascript| handle. |buffer| is only modified if
//  |buflen| is longer than the length of the name. On errors, |buffer| is
//  unmodified and the returned length is 0.
//    javascript - handle to an JavaScript action.
//    buffer     - buffer for holding the name, encoded in UTF-16LE.
//    buflen     - length of the buffer in bytes.
//  Returns the length of the JavaScript action name in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFJavaScriptAction_GetName(FPDF_JAVASCRIPT_ACTION javascript,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Get the script from the |javascript| handle. |buffer| is only modified if
//  |buflen| is longer than the length of the script. On errors, |buffer| is
//  unmodified and the returned length is 0.
//    javascript - handle to an JavaScript action.
//    buffer     - buffer for holding the name, encoded in UTF-16LE.
//    buflen     - length of the buffer in bytes.
//  Returns the length of the JavaScript action name in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFJavaScriptAction_GetScript(FPDF_JAVASCRIPT_ACTION javascript,FPDF_WCHAR * buffer,unsigned long buflen);
#include "pdfium/fpdf_sysfontinfo.h"
//  Function: FPDF_GetDefaultTTFMap
//     Returns a pointer to the default character set to TT Font name map. The
//     map is an array of FPDF_CharsetFontMap structs, with its end indicated
//     by a { -1, NULL } entry.
//  Parameters:
//      None.
//  Return Value:
//      Pointer to the Charset Font Map.
//  Note:
//      Once FPDF_GetDefaultTTFMapCount() and FPDF_GetDefaultTTFMapEntry() are no
//      longer experimental, this API will be marked as deprecated.
//      See https://crbug.com/348468114
FFI_PLUGIN_EXPORT const FPDF_CharsetFontMap * PDFIUM_FPDF_GetDefaultTTFMap();
//  Experimental API.
//  Function: FPDF_GetDefaultTTFMapCount
//     Returns the number of entries in the default character set to TT Font name
//     map.
//  Parameters:
//     None.
//  Return Value:
//     The number of entries in the map.
FFI_PLUGIN_EXPORT size_t PDFIUM_FPDF_GetDefaultTTFMapCount();
//  Experimental API.
//  Function: FPDF_GetDefaultTTFMapEntry
//     Returns an entry in the default character set to TT Font name map.
//  Parameters:
//     index    -   The index to the entry in the map to retrieve.
//  Return Value:
//      A pointer to the entry, if it is in the map, or NULL if the index is out
//      of bounds.
FFI_PLUGIN_EXPORT const FPDF_CharsetFontMap * PDFIUM_FPDF_GetDefaultTTFMapEntry(size_t index);
//  Function: FPDF_AddInstalledFont
//           Add a system font to the list in PDFium.
//  Comments:
//           This function is only called during the system font list building
//           process.
//  Parameters:
//           mapper          -   Opaque pointer to Foxit font mapper
//           face            -   The font face name
//           charset         -   Font character set. See above defined constants.
//  Return Value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_AddInstalledFont(void * mapper,const char * face,int charset);
//  Function: FPDF_SetSystemFontInfo
//           Set the system font info interface into PDFium
//  Parameters:
//           font_info       -   Pointer to a FPDF_SYSFONTINFO structure
//  Return Value:
//           None
//  Comments:
//           Platform support implementation should implement required methods of
//           FFDF_SYSFONTINFO interface, then call this function during PDFium
//           initialization process.
//           Call this with NULL to tell PDFium to stop using a previously set
//           |FPDF_SYSFONTINFO|.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_SetSystemFontInfo(FPDF_SYSFONTINFO * font_info);
//  Function: FPDF_GetDefaultSystemFontInfo
//           Get default system font info interface for current platform
//  Parameters:
//           None
//  Return Value:
//           Pointer to a FPDF_SYSFONTINFO structure describing the default
//           interface, or NULL if the platform doesn't have a default interface.
//           Application should call FPDF_FreeDefaultSystemFontInfo to free the
//           returned pointer.
//  Comments:
//           For some platforms, PDFium implements a default version of system
//           font info interface. The default implementation can be passed to
//           FPDF_SetSystemFontInfo().
FFI_PLUGIN_EXPORT FPDF_SYSFONTINFO * PDFIUM_FPDF_GetDefaultSystemFontInfo();
//  Function: FPDF_FreeDefaultSystemFontInfo
//            Free a default system font info interface
//  Parameters:
//            font_info       -   Pointer to a FPDF_SYSFONTINFO structure
//  Return Value:
//            None
//  Comments:
//            This function should be called on the output from
//            FPDF_GetDefaultSystemFontInfo() once it is no longer needed.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_FreeDefaultSystemFontInfo(FPDF_SYSFONTINFO * font_info);
#include "pdfium/fpdf_dataavail.h"
//  Create a document availability provider.
//    file_avail - pointer to file availability interface.
//    file       - pointer to a file access interface.
//  Returns a handle to the document availability provider, or NULL on error.
//  FPDFAvail_Destroy() must be called when done with the availability provider.
FFI_PLUGIN_EXPORT FPDF_AVAIL PDFIUM_FPDFAvail_Create(FX_FILEAVAIL * file_avail,FPDF_FILEACCESS * file);
//  Destroy the |avail| document availability provider.
//    avail - handle to document availability provider to be destroyed.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFAvail_Destroy(FPDF_AVAIL avail);
//  Checks if the document is ready for loading, if not, gets download hints.
//    avail - handle to document availability provider.
//    hints - pointer to a download hints interface.
//  Returns one of:
//    PDF_DATA_ERROR: A common error is returned. Data availability unknown.
//    PDF_DATA_NOTAVAIL: Data not yet available.
//    PDF_DATA_AVAIL: Data available.
//  Applications should call this function whenever new data arrives, and process
//  all the generated download hints, if any, until the function returns
//  |PDF_DATA_ERROR| or |PDF_DATA_AVAIL|.
//  if hints is nullptr, the function just check current document availability.
//  Once all data is available, call FPDFAvail_GetDocument() to get a document
//  handle.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAvail_IsDocAvail(FPDF_AVAIL avail,FX_DOWNLOADHINTS * hints);
//  Get document from the availability provider.
//    avail    - handle to document availability provider.
//    password - password for decrypting the PDF file. Optional.
//  Returns a handle to the document.
//  When FPDFAvail_IsDocAvail() returns TRUE, call FPDFAvail_GetDocument() to
//  retrieve the document handle.
//  See the comments for FPDF_LoadDocument() regarding the encoding for
//  |password|.
FFI_PLUGIN_EXPORT FPDF_DOCUMENT PDFIUM_FPDFAvail_GetDocument(FPDF_AVAIL avail,FPDF_BYTESTRING password);
//  Get the page number for the first available page in a linearized PDF.
//    doc - document handle.
//  Returns the zero-based index for the first available page.
//  For most linearized PDFs, the first available page will be the first page,
//  however, some PDFs might make another page the first available page.
//  For non-linearized PDFs, this function will always return zero.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAvail_GetFirstPageNum(FPDF_DOCUMENT doc);
//  Check if |page_index| is ready for loading, if not, get the
//  |FX_DOWNLOADHINTS|.
//    avail      - handle to document availability provider.
//    page_index - index number of the page. Zero for the first page.
//    hints      - pointer to a download hints interface. Populated if
//                 |page_index| is not available.
//  Returns one of:
//    PDF_DATA_ERROR: A common error is returned. Data availability unknown.
//    PDF_DATA_NOTAVAIL: Data not yet available.
//    PDF_DATA_AVAIL: Data available.
//  This function can be called only after FPDFAvail_GetDocument() is called.
//  Applications should call this function whenever new data arrives and process
//  all the generated download |hints|, if any, until this function returns
//  |PDF_DATA_ERROR| or |PDF_DATA_AVAIL|. Applications can then perform page
//  loading.
//  if hints is nullptr, the function just check current availability of
//  specified page.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAvail_IsPageAvail(FPDF_AVAIL avail,int page_index,FX_DOWNLOADHINTS * hints);
//  Check if form data is ready for initialization, if not, get the
//  |FX_DOWNLOADHINTS|.
//    avail - handle to document availability provider.
//    hints - pointer to a download hints interface. Populated if form is not
//            ready for initialization.
//  Returns one of:
//    PDF_FORM_ERROR: A common eror, in general incorrect parameters.
//    PDF_FORM_NOTAVAIL: Data not available.
//    PDF_FORM_AVAIL: Data available.
//    PDF_FORM_NOTEXIST: No form data.
//  This function can be called only after FPDFAvail_GetDocument() is called.
//  The application should call this function whenever new data arrives and
//  process all the generated download |hints|, if any, until the function
//  |PDF_FORM_ERROR|, |PDF_FORM_AVAIL| or |PDF_FORM_NOTEXIST|.
//  if hints is nullptr, the function just check current form availability.
//  Applications can then perform page loading. It is recommend to call
//  FPDFDOC_InitFormFillEnvironment() when |PDF_FORM_AVAIL| is returned.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAvail_IsFormAvail(FPDF_AVAIL avail,FX_DOWNLOADHINTS * hints);
//  Check whether a document is a linearized PDF.
//    avail - handle to document availability provider.
//  Returns one of:
//    PDF_LINEARIZED
//    PDF_NOT_LINEARIZED
//    PDF_LINEARIZATION_UNKNOWN
//  FPDFAvail_IsLinearized() will return |PDF_LINEARIZED| or |PDF_NOT_LINEARIZED|
//  when we have 1k  of data. If the files size less than 1k, it returns
//  |PDF_LINEARIZATION_UNKNOWN| as there is insufficient information to determine
//  if the PDF is linearlized.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFAvail_IsLinearized(FPDF_AVAIL avail);
#include "pdfium/fpdf_progressive.h"
//  Experimental API.
//  Function: FPDF_RenderPageBitmapWithColorScheme_Start
//           Start to render page contents to a device independent bitmap
//           progressively with a specified color scheme for the content.
//  Parameters:
//           bitmap       -   Handle to the device independent bitmap (as the
//                            output buffer). Bitmap handle can be created by
//                            FPDFBitmap_Create function.
//           page         -   Handle to the page as returned by FPDF_LoadPage
//                            function.
//           start_x      -   Left pixel position of the display area in the
//                            bitmap coordinate.
//           start_y      -   Top pixel position of the display area in the
//                            bitmap coordinate.
//           size_x       -   Horizontal size (in pixels) for displaying the
//                            page.
//           size_y       -   Vertical size (in pixels) for displaying the page.
//           rotate       -   Page orientation: 0 (normal), 1 (rotated 90
//                            degrees clockwise), 2 (rotated 180 degrees),
//                            3 (rotated 90 degrees counter-clockwise).
//           flags        -   0 for normal display, or combination of flags
//                            defined in fpdfview.h. With FPDF_ANNOT flag, it
//                            renders all annotations that does not require
//                            user-interaction, which are all annotations except
//                            widget and popup annotations.
//           color_scheme -   Color scheme to be used in rendering the |page|.
//                            If null, this function will work similar to
//                            FPDF_RenderPageBitmap_Start().
//           pause        -   The IFSDK_PAUSE interface. A callback mechanism
//                            allowing the page rendering process.
//  Return value:
//           Rendering Status. See flags for progressive process status for the
//           details.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_RenderPageBitmapWithColorScheme_Start(FPDF_BITMAP bitmap,FPDF_PAGE page,int start_x,int start_y,int size_x,int size_y,int rotate,int flags,const FPDF_COLORSCHEME * color_scheme,IFSDK_PAUSE * pause);
//  Function: FPDF_RenderPageBitmap_Start
//           Start to render page contents to a device independent bitmap
//           progressively.
//  Parameters:
//           bitmap      -   Handle to the device independent bitmap (as the
//                           output buffer). Bitmap handle can be created by
//                           FPDFBitmap_Create().
//           page        -   Handle to the page, as returned by FPDF_LoadPage().
//           start_x     -   Left pixel position of the display area in the
//                           bitmap coordinates.
//           start_y     -   Top pixel position of the display area in the bitmap
//                           coordinates.
//           size_x      -   Horizontal size (in pixels) for displaying the page.
//           size_y      -   Vertical size (in pixels) for displaying the page.
//           rotate      -   Page orientation: 0 (normal), 1 (rotated 90 degrees
//                           clockwise), 2 (rotated 180 degrees), 3 (rotated 90
//                           degrees counter-clockwise).
//           flags       -   0 for normal display, or combination of flags
//                           defined in fpdfview.h. With FPDF_ANNOT flag, it
//                           renders all annotations that does not require
//                           user-interaction, which are all annotations except
//                           widget and popup annotations.
//           pause       -   The IFSDK_PAUSE interface.A callback mechanism
//                           allowing the page rendering process
//  Return value:
//           Rendering Status. See flags for progressive process status for the
//           details.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_RenderPageBitmap_Start(FPDF_BITMAP bitmap,FPDF_PAGE page,int start_x,int start_y,int size_x,int size_y,int rotate,int flags,IFSDK_PAUSE * pause);
//  Function: FPDF_RenderPage_Continue
//           Continue rendering a PDF page.
//  Parameters:
//           page        -   Handle to the page, as returned by FPDF_LoadPage().
//           pause       -   The IFSDK_PAUSE interface (a callback mechanism
//                           allowing the page rendering process to be paused
//                           before it's finished). This can be NULL if you
//                           don't want to pause.
//  Return value:
//           The rendering status. See flags for progressive process status for
//           the details.
FFI_PLUGIN_EXPORT int PDFIUM_FPDF_RenderPage_Continue(FPDF_PAGE page,IFSDK_PAUSE * pause);
//  Function: FPDF_RenderPage_Close
//           Release the resource allocate during page rendering. Need to be
//           called after finishing rendering or
//           cancel the rendering.
//  Parameters:
//           page        -   Handle to the page, as returned by FPDF_LoadPage().
//  Return value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDF_RenderPage_Close(FPDF_PAGE page);
#include "pdfium/fpdf_text.h"
//  Function: FPDFText_LoadPage
//           Prepare information about all characters in a page.
//  Parameters:
//           page    -   Handle to the page. Returned by FPDF_LoadPage function
//                       (in FPDFVIEW module).
//  Return value:
//           A handle to the text page information structure.
//           NULL if something goes wrong.
//  Comments:
//           Application must call FPDFText_ClosePage to release the text page
//           information.
FFI_PLUGIN_EXPORT FPDF_TEXTPAGE PDFIUM_FPDFText_LoadPage(FPDF_PAGE page);
//  Function: FPDFText_ClosePage
//           Release all resources allocated for a text page information
//           structure.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//  Return Value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFText_ClosePage(FPDF_TEXTPAGE text_page);
//  Function: FPDFText_CountChars
//           Get number of characters in a page.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//  Return value:
//           Number of characters in the page. Return -1 for error.
//           Generated characters, like additional space characters, new line
//           characters, are also counted.
//  Comments:
//           Characters in a page form a "stream", inside the stream, each
//           character has an index.
//           We will use the index parameters in many of FPDFTEXT functions. The
//           first character in the page
//           has an index value of zero.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_CountChars(FPDF_TEXTPAGE text_page);
//  Function: FPDFText_GetUnicode
//           Get Unicode of a character in a page.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           The Unicode of the particular character.
//           If a character is not encoded in Unicode and Foxit engine can't
//           convert to Unicode,
//           the return value will be zero.
FFI_PLUGIN_EXPORT unsigned int PDFIUM_FPDFText_GetUnicode(FPDF_TEXTPAGE text_page,int index);
//  Experimental API.
//  Function: FPDFText_GetTextObject
//           Get the FPDF_PAGEOBJECT associated with a given character.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           The associated text object for the character at |index|, or NULL on
//           error. The returned text object, if non-null, is of type
//           |FPDF_PAGEOBJ_TEXT|. The caller does not own the returned object.
FFI_PLUGIN_EXPORT FPDF_PAGEOBJECT PDFIUM_FPDFText_GetTextObject(FPDF_TEXTPAGE text_page,int index);
//  Experimental API.
//  Function: FPDFText_IsGenerated
//           Get if a character in a page is generated by PDFium.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           1 if the character is generated by PDFium.
//           0 if the character is not generated by PDFium.
//           -1 if there was an error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_IsGenerated(FPDF_TEXTPAGE text_page,int index);
//  Experimental API.
//  Function: FPDFText_IsHyphen
//           Get if a character in a page is a hyphen.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           1 if the character is a hyphen.
//           0 if the character is not a hyphen.
//           -1 if there was an error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_IsHyphen(FPDF_TEXTPAGE text_page,int index);
//  Experimental API.
//  Function: FPDFText_HasUnicodeMapError
//           Get if a character in a page has an invalid unicode mapping.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           1 if the character has an invalid unicode mapping.
//           0 if the character has no known unicode mapping issues.
//           -1 if there was an error.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_HasUnicodeMapError(FPDF_TEXTPAGE text_page,int index);
//  Function: FPDFText_GetFontSize
//           Get the font size of a particular character.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           The font size of the particular character, measured in points (about
//           1/72 inch). This is the typographic size of the font (so called
//           "em size").
FFI_PLUGIN_EXPORT double PDFIUM_FPDFText_GetFontSize(FPDF_TEXTPAGE text_page,int index);
//  Experimental API.
//  Function: FPDFText_GetFontInfo
//           Get the font name and flags of a particular character.
//  Parameters:
//           text_page - Handle to a text page information structure.
//                       Returned by FPDFText_LoadPage function.
//           index     - Zero-based index of the character.
//           buffer    - A buffer receiving the font name.
//           buflen    - The length of |buffer| in bytes.
//           flags     - Optional pointer to an int receiving the font flags.
//                       These flags should be interpreted per PDF spec 1.7
//                       Section 5.7.1 Font Descriptor Flags.
//  Return value:
//           On success, return the length of the font name, including the
//           trailing NUL character, in bytes. If this length is less than or
//           equal to |length|, |buffer| is set to the font name, |flags| is
//           set to the font flags. |buffer| is in UTF-8 encoding. Return 0 on
//           failure.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFText_GetFontInfo(FPDF_TEXTPAGE text_page,int index,void * buffer,unsigned long buflen,int * flags);
//  Experimental API.
//  Function: FPDFText_GetFontWeight
//           Get the font weight of a particular character.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return value:
//           On success, return the font weight of the particular character. If
//           |text_page| is invalid, if |index| is out of bounds, or if the
//           character's text object is undefined, return -1.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetFontWeight(FPDF_TEXTPAGE text_page,int index);
//  Experimental API.
//  Function: FPDFText_GetFillColor
//           Get the fill color of a particular character.
//  Parameters:
//           text_page      -   Handle to a text page information structure.
//                              Returned by FPDFText_LoadPage function.
//           index          -   Zero-based index of the character.
//           R              -   Pointer to an unsigned int number receiving the
//                              red value of the fill color.
//           G              -   Pointer to an unsigned int number receiving the
//                              green value of the fill color.
//           B              -   Pointer to an unsigned int number receiving the
//                              blue value of the fill color.
//           A              -   Pointer to an unsigned int number receiving the
//                              alpha value of the fill color.
//  Return value:
//           Whether the call succeeded. If false, |R|, |G|, |B| and |A| are
//           unchanged.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetFillColor(FPDF_TEXTPAGE text_page,int index,unsigned int * R,unsigned int * G,unsigned int * B,unsigned int * A);
//  Experimental API.
//  Function: FPDFText_GetStrokeColor
//           Get the stroke color of a particular character.
//  Parameters:
//           text_page      -   Handle to a text page information structure.
//                              Returned by FPDFText_LoadPage function.
//           index          -   Zero-based index of the character.
//           R              -   Pointer to an unsigned int number receiving the
//                              red value of the stroke color.
//           G              -   Pointer to an unsigned int number receiving the
//                              green value of the stroke color.
//           B              -   Pointer to an unsigned int number receiving the
//                              blue value of the stroke color.
//           A              -   Pointer to an unsigned int number receiving the
//                              alpha value of the stroke color.
//  Return value:
//           Whether the call succeeded. If false, |R|, |G|, |B| and |A| are
//           unchanged.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetStrokeColor(FPDF_TEXTPAGE text_page,int index,unsigned int * R,unsigned int * G,unsigned int * B,unsigned int * A);
//  Experimental API.
//  Function: FPDFText_GetCharAngle
//           Get character rotation angle.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//  Return Value:
//           On success, return the angle value in radian. Value will always be
//           greater or equal to 0. If |text_page| is invalid, or if |index| is
//           out of bounds, then return -1.
FFI_PLUGIN_EXPORT float PDFIUM_FPDFText_GetCharAngle(FPDF_TEXTPAGE text_page,int index);
//  Function: FPDFText_GetCharBox
//           Get bounding box of a particular character.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//           left        -   Pointer to a double number receiving left position
//                           of the character box.
//           right       -   Pointer to a double number receiving right position
//                           of the character box.
//           bottom      -   Pointer to a double number receiving bottom position
//                           of the character box.
//           top         -   Pointer to a double number receiving top position of
//                           the character box.
//  Return Value:
//           On success, return TRUE and fill in |left|, |right|, |bottom|, and
//           |top|. If |text_page| is invalid, or if |index| is out of bounds,
//           then return FALSE, and the out parameters remain unmodified.
//  Comments:
//           All positions are measured in PDF "user space".
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetCharBox(FPDF_TEXTPAGE text_page,int index,double * left,double * right,double * bottom,double * top);
//  Experimental API.
//  Function: FPDFText_GetLooseCharBox
//           Get a "loose" bounding box of a particular character, i.e., covering
//           the entire glyph bounds, without taking the actual glyph shape into
//           account.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//           rect        -   Pointer to a FS_RECTF receiving the character box.
//  Return Value:
//           On success, return TRUE and fill in |rect|. If |text_page| is
//           invalid, or if |index| is out of bounds, then return FALSE, and the
//           |rect| out parameter remains unmodified.
//  Comments:
//           All positions are measured in PDF "user space".
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetLooseCharBox(FPDF_TEXTPAGE text_page,int index,FS_RECTF * rect);
//  Experimental API.
//  Function: FPDFText_GetMatrix
//           Get the effective transformation matrix for a particular character.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage().
//           index       -   Zero-based index of the character.
//           matrix      -   Pointer to a FS_MATRIX receiving the transformation
//                           matrix.
//  Return Value:
//           On success, return TRUE and fill in |matrix|. If |text_page| is
//           invalid, or if |index| is out of bounds, or if |matrix| is NULL,
//           then return FALSE, and |matrix| remains unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetMatrix(FPDF_TEXTPAGE text_page,int index,FS_MATRIX * matrix);
//  Function: FPDFText_GetCharOrigin
//           Get origin of a particular character.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           index       -   Zero-based index of the character.
//           x           -   Pointer to a double number receiving x coordinate of
//                           the character origin.
//           y           -   Pointer to a double number receiving y coordinate of
//                           the character origin.
//  Return Value:
//           Whether the call succeeded. If false, x and y are unchanged.
//  Comments:
//           All positions are measured in PDF "user space".
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetCharOrigin(FPDF_TEXTPAGE text_page,int index,double * x,double * y);
//  Function: FPDFText_GetCharIndexAtPos
//           Get the index of a character at or nearby a certain position on the
//           page.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           x           -   X position in PDF "user space".
//           y           -   Y position in PDF "user space".
//           xTolerance  -   An x-axis tolerance value for character hit
//                           detection, in point units.
//           yTolerance  -   A y-axis tolerance value for character hit
//                           detection, in point units.
//  Return Value:
//           The zero-based index of the character at, or nearby the point (x,y).
//           If there is no character at or nearby the point, return value will
//           be -1. If an error occurs, -3 will be returned.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetCharIndexAtPos(FPDF_TEXTPAGE text_page,double x,double y,double xTolerance,double yTolerance);
//  Function: FPDFText_GetText
//           Extract unicode text string from the page.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           start_index -   Index for the start characters.
//           count       -   Number of UCS-2 values to be extracted.
//           result      -   A buffer (allocated by application) receiving the
//                           extracted UCS-2 values. The buffer must be able to
//                           hold `count` UCS-2 values plus a terminator.
//  Return Value:
//           Number of characters written into the result buffer, including the
//           trailing terminator.
//  Comments:
//           This function ignores characters without UCS-2 representations.
//           It considers all characters on the page, even those that are not
//           visible when the page has a cropbox. To filter out the characters
//           outside of the cropbox, use FPDF_GetPageBoundingBox() and
//           FPDFText_GetCharBox().
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetText(FPDF_TEXTPAGE text_page,int start_index,int count,unsigned short * result);
//  Function: FPDFText_CountRects
//           Counts number of rectangular areas occupied by a segment of text,
//           and caches the result for subsequent FPDFText_GetRect() calls.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           start_index -   Index for the start character.
//           count       -   Number of characters, or -1 for all remaining.
//  Return value:
//           Number of rectangles, 0 if text_page is null, or -1 on bad
//           start_index.
//  Comments:
//           This function, along with FPDFText_GetRect can be used by
//           applications to detect the position on the page for a text segment,
//           so proper areas can be highlighted. The FPDFText_* functions will
//           automatically merge small character boxes into bigger one if those
//           characters are on the same line and use same font settings.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_CountRects(FPDF_TEXTPAGE text_page,int start_index,int count);
//  Function: FPDFText_GetRect
//           Get a rectangular area from the result generated by
//           FPDFText_CountRects.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           rect_index  -   Zero-based index for the rectangle.
//           left        -   Pointer to a double value receiving the rectangle
//                           left boundary.
//           top         -   Pointer to a double value receiving the rectangle
//                           top boundary.
//           right       -   Pointer to a double value receiving the rectangle
//                           right boundary.
//           bottom      -   Pointer to a double value receiving the rectangle
//                           bottom boundary.
//  Return Value:
//           On success, return TRUE and fill in |left|, |top|, |right|, and
//           |bottom|. If |text_page| is invalid then return FALSE, and the out
//           parameters remain unmodified. If |text_page| is valid but
//           |rect_index| is out of bounds, then return FALSE and set the out
//           parameters to 0.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_GetRect(FPDF_TEXTPAGE text_page,int rect_index,double * left,double * top,double * right,double * bottom);
//  Function: FPDFText_GetBoundedText
//           Extract unicode text within a rectangular boundary on the page.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           left        -   Left boundary.
//           top         -   Top boundary.
//           right       -   Right boundary.
//           bottom      -   Bottom boundary.
//           buffer      -   Caller-allocated buffer to receive UTF-16 values.
//           buflen      -   Number of UTF-16 values (not bytes) that `buffer`
//                           is capable of holding.
//  Return Value:
//           If buffer is NULL or buflen is zero, return number of UTF-16
//           values (not bytes) of text present within the rectangle, excluding
//           a terminating NUL. Generally you should pass a buffer at least one
//           larger than this if you want a terminating NUL, which will be
//           provided if space is available. Otherwise, return number of UTF-16
//           values copied into the buffer, including the terminating NUL when
//           space for it is available.
//  Comment:
//           If the buffer is too small, as much text as will fit is copied into
//           it. May return a split surrogate in that case.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetBoundedText(FPDF_TEXTPAGE text_page,double left,double top,double right,double bottom,unsigned short * buffer,int buflen);
//  Function: FPDFText_FindStart
//           Start a search.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//           findwhat    -   A unicode match pattern.
//           flags       -   Option flags.
//           start_index -   Start from this character. -1 for end of the page.
//  Return Value:
//           A handle for the search context. FPDFText_FindClose must be called
//           to release this handle.
FFI_PLUGIN_EXPORT FPDF_SCHHANDLE PDFIUM_FPDFText_FindStart(FPDF_TEXTPAGE text_page,FPDF_WIDESTRING findwhat,unsigned long flags,int start_index);
//  Function: FPDFText_FindNext
//           Search in the direction from page start to end.
//  Parameters:
//           handle      -   A search context handle returned by
//                           FPDFText_FindStart.
//  Return Value:
//           Whether a match is found.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_FindNext(FPDF_SCHHANDLE handle);
//  Function: FPDFText_FindPrev
//           Search in the direction from page end to start.
//  Parameters:
//           handle      -   A search context handle returned by
//                           FPDFText_FindStart.
//  Return Value:
//           Whether a match is found.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFText_FindPrev(FPDF_SCHHANDLE handle);
//  Function: FPDFText_GetSchResultIndex
//           Get the starting character index of the search result.
//  Parameters:
//           handle      -   A search context handle returned by
//                           FPDFText_FindStart.
//  Return Value:
//           Index for the starting character.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetSchResultIndex(FPDF_SCHHANDLE handle);
//  Function: FPDFText_GetSchCount
//           Get the number of matched characters in the search result.
//  Parameters:
//           handle      -   A search context handle returned by
//                           FPDFText_FindStart.
//  Return Value:
//           Number of matched characters.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFText_GetSchCount(FPDF_SCHHANDLE handle);
//  Function: FPDFText_FindClose
//           Release a search context.
//  Parameters:
//           handle      -   A search context handle returned by
//                           FPDFText_FindStart.
//  Return Value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFText_FindClose(FPDF_SCHHANDLE handle);
//  Function: FPDFLink_LoadWebLinks
//           Prepare information about weblinks in a page.
//  Parameters:
//           text_page   -   Handle to a text page information structure.
//                           Returned by FPDFText_LoadPage function.
//  Return Value:
//           A handle to the page's links information structure, or
//           NULL if something goes wrong.
//  Comments:
//           Weblinks are those links implicitly embedded in PDF pages. PDF also
//           has a type of annotation called "link" (FPDFTEXT doesn't deal with
//           that kind of link). FPDFTEXT weblink feature is useful for
//           automatically detecting links in the page contents. For example,
//           things like "https://www.example.com" will be detected, so
//           applications can allow user to click on those characters to activate
//           the link, even the PDF doesn't come with link annotations.
//           FPDFLink_CloseWebLinks must be called to release resources.
FFI_PLUGIN_EXPORT FPDF_PAGELINK PDFIUM_FPDFLink_LoadWebLinks(FPDF_TEXTPAGE text_page);
//  Function: FPDFLink_CountWebLinks
//           Count number of detected web links.
//  Parameters:
//           link_page   -   Handle returned by FPDFLink_LoadWebLinks.
//  Return Value:
//           Number of detected web links.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFLink_CountWebLinks(FPDF_PAGELINK link_page);
//  Function: FPDFLink_GetURL
//           Fetch the URL information for a detected web link.
//  Parameters:
//           link_page   -   Handle returned by FPDFLink_LoadWebLinks.
//           link_index  -   Zero-based index for the link.
//           buffer      -   A unicode buffer for the result.
//           buflen      -   Number of 16-bit code units (not bytes) for the
//                           buffer, including an additional terminator.
//  Return Value:
//           If |buffer| is NULL or |buflen| is zero, return the number of 16-bit
//           code units (not bytes) needed to buffer the result (an additional
//           terminator is included in this count).
//           Otherwise, copy the result into |buffer|, truncating at |buflen| if
//           the result is too large to fit, and return the number of 16-bit code
//           units actually copied into the buffer (the additional terminator is
//           also included in this count).
//           If |link_index| does not correspond to a valid link, then the result
//           is an empty string.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFLink_GetURL(FPDF_PAGELINK link_page,int link_index,unsigned short * buffer,int buflen);
//  Function: FPDFLink_CountRects
//           Count number of rectangular areas for the link.
//  Parameters:
//           link_page   -   Handle returned by FPDFLink_LoadWebLinks.
//           link_index  -   Zero-based index for the link.
//  Return Value:
//           Number of rectangular areas for the link.  If |link_index| does
//           not correspond to a valid link, then 0 is returned.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFLink_CountRects(FPDF_PAGELINK link_page,int link_index);
//  Function: FPDFLink_GetRect
//           Fetch the boundaries of a rectangle for a link.
//  Parameters:
//           link_page   -   Handle returned by FPDFLink_LoadWebLinks.
//           link_index  -   Zero-based index for the link.
//           rect_index  -   Zero-based index for a rectangle.
//           left        -   Pointer to a double value receiving the rectangle
//                           left boundary.
//           top         -   Pointer to a double value receiving the rectangle
//                           top boundary.
//           right       -   Pointer to a double value receiving the rectangle
//                           right boundary.
//           bottom      -   Pointer to a double value receiving the rectangle
//                           bottom boundary.
//  Return Value:
//           On success, return TRUE and fill in |left|, |top|, |right|, and
//           |bottom|. If |link_page| is invalid or if |link_index| does not
//           correspond to a valid link, then return FALSE, and the out
//           parameters remain unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFLink_GetRect(FPDF_PAGELINK link_page,int link_index,int rect_index,double * left,double * top,double * right,double * bottom);
//  Experimental API.
//  Function: FPDFLink_GetTextRange
//           Fetch the start char index and char count for a link.
//  Parameters:
//           link_page         -   Handle returned by FPDFLink_LoadWebLinks.
//           link_index        -   Zero-based index for the link.
//           start_char_index  -   pointer to int receiving the start char index
//           char_count        -   pointer to int receiving the char count
//  Return Value:
//           On success, return TRUE and fill in |start_char_index| and
//           |char_count|. if |link_page| is invalid or if |link_index| does
//           not correspond to a valid link, then return FALSE and the out
//           parameters remain unmodified.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFLink_GetTextRange(FPDF_PAGELINK link_page,int link_index,int * start_char_index,int * char_count);
//  Function: FPDFLink_CloseWebLinks
//           Release resources used by weblink feature.
//  Parameters:
//           link_page   -   Handle returned by FPDFLink_LoadWebLinks.
//  Return Value:
//           None.
FFI_PLUGIN_EXPORT void PDFIUM_FPDFLink_CloseWebLinks(FPDF_PAGELINK link_page);
#include "pdfium/fpdf_ext.h"
//  Get the document's PageMode.
//    doc - Handle to document.
//  Returns one of the |PAGEMODE_*| flags defined above.
//  The page mode defines how the document should be initially displayed.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFDoc_GetPageMode(FPDF_DOCUMENT document);
#include "pdfium/fpdf_attachment.h"
//  Experimental API.
//  Get the number of embedded files in |document|.
//    document - handle to a document.
//  Returns the number of embedded files in |document|.
FFI_PLUGIN_EXPORT int PDFIUM_FPDFDoc_GetAttachmentCount(FPDF_DOCUMENT document);
//  Experimental API.
//  Add an embedded file with |name| in |document|. If |name| is empty, or if
//  |name| is the name of a existing embedded file in |document|, or if
//  |document|'s embedded file name tree is too deep (i.e. |document| has too
//  many embedded files already), then a new attachment will not be added.
//    document - handle to a document.
//    name     - name of the new attachment.
//  Returns a handle to the new attachment object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ATTACHMENT PDFIUM_FPDFDoc_AddAttachment(FPDF_DOCUMENT document,FPDF_WIDESTRING name);
//  Experimental API.
//  Get the embedded attachment at |index| in |document|. Note that the returned
//  attachment handle is only valid while |document| is open.
//    document - handle to a document.
//    index    - the index of the requested embedded file.
//  Returns the handle to the attachment object, or NULL on failure.
FFI_PLUGIN_EXPORT FPDF_ATTACHMENT PDFIUM_FPDFDoc_GetAttachment(FPDF_DOCUMENT document,int index);
//  Experimental API.
//  Delete the embedded attachment at |index| in |document|. Note that this does
//  not remove the attachment data from the PDF file; it simply removes the
//  file's entry in the embedded files name tree so that it does not appear in
//  the attachment list. This behavior may change in the future.
//    document - handle to a document.
//    index    - the index of the embedded file to be deleted.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFDoc_DeleteAttachment(FPDF_DOCUMENT document,int index);
//  Experimental API.
//  Get the name of the |attachment| file. |buffer| is only modified if |buflen|
//  is longer than the length of the file name. On errors, |buffer| is unmodified
//  and the returned length is 0.
//    attachment - handle to an attachment.
//    buffer     - buffer for holding the file name, encoded in UTF-16LE.
//    buflen     - length of the buffer in bytes.
//  Returns the length of the file name in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAttachment_GetName(FPDF_ATTACHMENT attachment,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Check if the params dictionary of |attachment| has |key| as a key.
//    attachment - handle to an attachment.
//    key        - the key to look for, encoded in UTF-8.
//  Returns true if |key| exists.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAttachment_HasKey(FPDF_ATTACHMENT attachment,FPDF_BYTESTRING key);
//  Experimental API.
//  Get the type of the value corresponding to |key| in the params dictionary of
//  the embedded |attachment|.
//    attachment - handle to an attachment.
//    key        - the key to look for, encoded in UTF-8.
//  Returns the type of the dictionary value.
FFI_PLUGIN_EXPORT FPDF_OBJECT_TYPE PDFIUM_FPDFAttachment_GetValueType(FPDF_ATTACHMENT attachment,FPDF_BYTESTRING key);
//  Experimental API.
//  Set the string value corresponding to |key| in the params dictionary of the
//  embedded file |attachment|, overwriting the existing value if any. The value
//  type should be FPDF_OBJECT_STRING after this function call succeeds.
//    attachment - handle to an attachment.
//    key        - the key to the dictionary entry, encoded in UTF-8.
//    value      - the string value to be set, encoded in UTF-16LE.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAttachment_SetStringValue(FPDF_ATTACHMENT attachment,FPDF_BYTESTRING key,FPDF_WIDESTRING value);
//  Experimental API.
//  Get the string value corresponding to |key| in the params dictionary of the
//  embedded file |attachment|. |buffer| is only modified if |buflen| is longer
//  than the length of the string value. Note that if |key| does not exist in the
//  dictionary or if |key|'s corresponding value in the dictionary is not a
//  string (i.e. the value is not of type FPDF_OBJECT_STRING or
//  FPDF_OBJECT_NAME), then an empty string would be copied to |buffer| and the
//  return value would be 2. On other errors, nothing would be added to |buffer|
//  and the return value would be 0.
//    attachment - handle to an attachment.
//    key        - the key to the requested string value, encoded in UTF-8.
//    buffer     - buffer for holding the string value encoded in UTF-16LE.
//    buflen     - length of the buffer in bytes.
//  Returns the length of the dictionary value string in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAttachment_GetStringValue(FPDF_ATTACHMENT attachment,FPDF_BYTESTRING key,FPDF_WCHAR * buffer,unsigned long buflen);
//  Experimental API.
//  Set the file data of |attachment|, overwriting the existing file data if any.
//  The creation date and checksum will be updated, while all other dictionary
//  entries will be deleted. Note that only contents with |len| smaller than
//  INT_MAX is supported.
//    attachment - handle to an attachment.
//    contents   - buffer holding the file data to write to |attachment|.
//    len        - length of file data in bytes.
//  Returns true if successful.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAttachment_SetFile(FPDF_ATTACHMENT attachment,FPDF_DOCUMENT document,const void * contents,unsigned long len);
//  Experimental API.
//  Get the file data of |attachment|.
//  When the attachment file data is readable, true is returned, and |out_buflen|
//  is updated to indicate the file data size. |buffer| is only modified if
//  |buflen| is non-null and long enough to contain the entire file data. Callers
//  must check both the return value and the input |buflen| is no less than the
//  returned |out_buflen| before using the data.
//  Otherwise, when the attachment file data is unreadable or when |out_buflen|
//  is null, false is returned and |buffer| and |out_buflen| remain unmodified.
//    attachment - handle to an attachment.
//    buffer     - buffer for holding the file data from |attachment|.
//    buflen     - length of the buffer in bytes.
//    out_buflen - pointer to the variable that will receive the minimum buffer
//                 size to contain the file data of |attachment|.
//  Returns true on success, false otherwise.
FFI_PLUGIN_EXPORT FPDF_BOOL PDFIUM_FPDFAttachment_GetFile(FPDF_ATTACHMENT attachment,void * buffer,unsigned long buflen,unsigned long * out_buflen);
//  Experimental API.
//  Get the MIME type (Subtype) of the embedded file |attachment|. |buffer| is
//  only modified if |buflen| is longer than the length of the MIME type string.
//  If the Subtype is not found or if there is no file stream, an empty string
//  would be copied to |buffer| and the return value would be 2. On other errors,
//  nothing would be added to |buffer| and the return value would be 0.
//    attachment - handle to an attachment.
//    buffer     - buffer for holding the MIME type string encoded in UTF-16LE.
//    buflen     - length of the buffer in bytes.
//  Returns the length of the MIME type string in bytes.
FFI_PLUGIN_EXPORT unsigned long PDFIUM_FPDFAttachment_GetSubtype(FPDF_ATTACHMENT attachment,FPDF_WCHAR * buffer,unsigned long buflen);
