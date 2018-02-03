#ifndef _RASTERIZER_H
#define _RASTERIZER_H

#include "framebuffer.h"
#include "drawer.h"
#include "color.h"
#include "graphics.h"

#define MAX_VERTICES 25

typedef struct {
    int x;
    int y;
} Vertex;

typedef struct {
    Vertex v;
} Vertices[MAX_VERTICES];

/**
 * A simple polygon is a polygon without any intersecting sides.
 */
void simplePolygonFill(Vertex* vertices, Color c);

#endif
