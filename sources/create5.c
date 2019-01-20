/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/



#include "my.h"

void create_object_dust(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.dust;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 3;
    obj.size_max = 1920;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}

void create_object_repose(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.repose;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 4;
    obj.size_max = 1920;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}

void create_object_fond(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.fond;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 3;
    obj.size_max = 1920;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}