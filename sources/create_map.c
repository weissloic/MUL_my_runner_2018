/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/



#include "my.h"

void map_generate(int **map, int i, int j, all_t *all)
{
    if (map[j][i] == 'e') {
        create_object_end((sfIntRect)
        {0, 0, 450, 230}, (sfVector2f){i*128, j*128+650}, END, all);
    }
    else if (map[j][i] == 'c') {
        create_object_pic((sfIntRect)
        {0, 0, 128, 128}, (sfVector2f){i*148, j*150 + 760}, ENEMY,
        all);
    }
    else if (map[j][i] == 'p') {
        create_object_poule((sfIntRect)
        {0, 0, 128, 128}, (sfVector2f){i*148, j*150 + 760}, ENEMY,
        all);
    }
}

void sprite_option_menu(all_t *all)
{
    all->all_texture.test = sfSprite_create();
    all->all_texture.planet_fix = sfSprite_create();
    all->all_texture.sprite_perso_menu = sfSprite_create();
    all->all_texture.fleche_menu_option = sfSprite_create();
    all->all_texture.fleche_menu_option_invert = sfSprite_create();
    all->all_texture.pos_planet.x = 0;
    all->all_texture.pos_planet.y = 500;
    all->all_texture.pos_fleche.x = 0;
    all->all_texture.pos_fleche.y = 200;
    all->all_texture.pos_fleche_invert.x = 150;
    all->all_texture.pos_fleche_invert.y = 200;
}

void adding_two(all_t *all)
{
    sfSprite_setPosition(all->all_texture.fleche_menu_option_invert,
    all->all_texture.pos_fleche_invert);
    sfSprite_setPosition(all->all_texture.fleche_menu_option,
    all->all_texture.pos_fleche);
    sfRenderWindow_drawSprite(all->window.window, all->all_texture.test,
    NULL);
    sfRenderWindow_drawSprite(all->window.window, all->all_texture.planet_fix,
    NULL);
    game_engine_core_two(all);
    display_two(*all);
}

void menu_adding_option(all_t *all)
{
    sprite_option_menu(all);
    sfSprite_setTexture(all->all_texture.test, all->all_texture.men, sfTrue);
    sfSprite_setTexture(all->all_texture.planet_fix,
    all->all_texture.planet, sfTrue);
    sfSprite_setTexture(all->all_texture.fleche_menu_option,
    all->all_texture.fleche_texture, sfTrue);
    sfSprite_setTexture(all->all_texture.fleche_menu_option_invert,
    all->all_texture.fleche_texture_invert, sfTrue);
    sfSprite_setPosition(all->all_texture.planet_fix,
    all->all_texture.pos_planet);
    adding_two(all);
}