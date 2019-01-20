/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

all_texture_t create_all_texturesone(void)
{
    all_texture_t all_texture;
    char *str = "images/menu_option/fleche_invert.png";
    char *test = "images/menu_option/fleche.png";
    all_texture.end = sfTexture_createFromFile("images/end.png",
    NULL);
    all_texture.fleche_texture = sfTexture_createFromFile(test,
    NULL);
    all_texture.fleche_texture_invert = sfTexture_createFromFile(str,
    NULL);
    all_texture.poule = sfTexture_createFromFile("images/poule.png",
    NULL);
    return (all_texture);
}

all_texture_t create_all_textures1(void)
{
    all_texture_t all_texture = create_all_texturesone();


    all_texture.ciel = sfTexture_createFromFile("images/1.png",
    NULL);
    all_texture.dust = sfTexture_createFromFile("images/dust.png",
    NULL);
    all_texture.ice = sfTexture_createFromFile("images/tes.png",
    NULL);
    all_texture.fond = sfTexture_createFromFile("images/cactus.png",
    NULL);
    all_texture.repose = sfTexture_createFromFile("images/repose.png",
    NULL);
    all_texture.pic1 = sfTexture_createFromFile("images/cac_enemy.png",
    NULL);

    return (all_texture);
}

all_texture_t create_all_textures2(void)
{
    all_texture_t all_texture = create_all_textures1();

    all_texture.pause = sfTexture_createFromFile("images/pause.png",
    NULL);
    all_texture.perso = sfTexture_createFromFile(
    "images/astro3.png", NULL);
    all_texture.victoire = sfTexture_createFromFile(
    "images/espace.jpg", NULL);
    all_texture.defaite = sfTexture_createFromFile("images/explosion.png",
    NULL);
    all_texture.mm1 = sfTexture_createFromFile(
    "images/menu_princip/option.png", NULL);
    all_texture.mm2 = sfTexture_createFromFile(
    "images/menu_princip/option.png", NULL);
    all_texture.men = sfTexture_createFromFile(
    "images/menu_princip/background.png", NULL);

    return (all_texture);
}

all_texture_t create_all_textures(void)
{
    all_texture_t all_texture = create_all_textures2();

    all_texture.planet = sfTexture_createFromFile(
    "images/menu_princip/ground.png", NULL);
    all_texture.perso_menu = sfTexture_createFromFile(
    "images/menu_princip/idemenu.png", NULL);
    all_texture.planet_fond = sfTexture_createFromFile(
    "images/menu_princip/planet_fond.png", NULL);
    all_texture.earth_fond = sfTexture_createFromFile(
    "images/menu_princip/earth_fond.png", NULL);
    all_texture.text_astrorunner = sfTexture_createFromFile(
    "images/menu_princip/astrorunner.png", NULL);
    all_texture.text_game = sfTexture_createFromFile(
    "images/menu_princip/game.png", NULL);

    return (all_texture);
}

