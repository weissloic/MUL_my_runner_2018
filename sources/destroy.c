/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/



#include "my.h"

void destroy_all(all_t *all)
{
    sfTexture_destroy(all->all_texture.pic1);
    sfTexture_destroy(all->all_texture.end);
    sfTexture_destroy(all->all_texture.ciel);
    sfTexture_destroy(all->all_texture.dust);
    sfTexture_destroy(all->all_texture.ice);
    sfTexture_destroy(all->all_texture.perso);
    sfTexture_destroy(all->all_texture.pause);
    sfTexture_destroy(all->all_texture.victoire);
    sfTexture_destroy(all->all_texture.defaite);
    for (int i = 0; i < all->nb_object; i++)
        sfSprite_destroy(all->object[i].sprite);
    sfMusic_destroy(all->main_sound);
}