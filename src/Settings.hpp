#ifndef SETTINGS_HPP
#define SETTINGS_HPP
#pragma once

// Echelle des modeles
#define ECHELLE 1
#define GRAV_CONST 6.67E-12

// Ombre
#define SHADOW_ENABLE // Activer les ombres
#define SHADOW_RES 8192 // Resolution des ombres
#define FAR 250.f * ECHELLE // Distance Ombre 

// Deltatime limites
#define LOW_LIMIT 144.f / 1000.f
#define HIGH_LIMIT 72.f / 1000.f

// Effet relief des textures
#define NORMAL_MAP

// Resolution d'ecran
#define RESOLUTION_X 1760
#define RESOLUTION_Y 990
#define FULLSCREEN 0

// Exposition
#define EXPOSURE 0.5f

#endif