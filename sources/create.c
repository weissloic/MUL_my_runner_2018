/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void create_object_pause(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.pause;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 0;
    obj.size_max = 0;
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

void create_object_persomenu(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.perso_menu;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 220;
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

void create_object_end(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.end;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 0;
    obj.size_max = 0;
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

void create_object_victory(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.victoire;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 0;
    obj.size_max = 0;
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

void create_object_lose(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.defaite;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 0;
    obj.size_max = 0;
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