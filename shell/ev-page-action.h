/*
 *  Copyright (C) 2003, 2004 Marco Pesenti Gritti
 *  Copyright (C) 2003, 2004 Christian Persch
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *  $Id$
 */

#ifndef EV_PAGE_ACTION_H
#define EV_PAGE_ACTION_H

#include <gtk/gtkaction.h>
#include <gtk/gtktreemodel.h>
#include <ev-document.h>

G_BEGIN_DECLS

#define EV_TYPE_PAGE_ACTION            (ev_page_action_get_type ())
#define EV_PAGE_ACTION(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), EV_TYPE_PAGE_ACTION, EvPageAction))
#define EV_PAGE_ACTION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), EV_TYPE_PAGE_ACTION, EvPageActionClass))
#define EV_IS_PAGE_ACTION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EV_TYPE_PAGE_ACTION))
#define EV_IS_PAGE_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((obj), EV_TYPE_PAGE_ACTION))
#define EV_PAGE_ACTION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), EV_TYPE_PAGE_ACTION, EvPageActionClass))

typedef struct _EvPageAction		EvPageAction;
typedef struct _EvPageActionPrivate	EvPageActionPrivate;
typedef struct _EvPageActionClass		EvPageActionClass;

struct _EvPageAction
{
	GtkAction parent;
	
	/*< private >*/
	EvPageActionPrivate *priv;
};

struct _EvPageActionClass
{
	GtkActionClass parent_class;

	void (* goto_page) (EvPageAction *page_action,
			    int           page_number);
};

GType ev_page_action_get_type     (void);
void  ev_page_action_set_document (EvPageAction *page_action,
				   EvDocument   *document);
void  ev_page_action_set_model    (EvPageAction *page_action,
				   GtkTreeModel *model);


G_END_DECLS

#endif
