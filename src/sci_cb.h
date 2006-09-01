/*
 *      sci_cb.h - this file is part of Geany, a fast and lightweight IDE
 *
 *      Copyright 2006 Enrico Troeger <enrico.troeger@uvena.de>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef GEANY_SCI_CB_H
#define GEANY_SCI_CB_H 1

#ifndef PLAT_GTK
#   define PLAT_GTK 1	// needed for ScintillaWidget.h
#endif

#include "Scintilla.h"
#include "ScintillaWidget.h"

#define SSM(s, m, w, l) scintilla_send_message(s, m, w, l)


gchar **html_entities;


// callback func called by all editors when a signal arises
void on_editor_notification(GtkWidget* editor, gint scn, gpointer lscn, gpointer user_data);

gboolean sci_cb_start_auto_complete(gint idx, gint pos, gboolean force);

void sci_cb_get_indent(ScintillaObject *sci, gint pos, gboolean use_this_line);

void sci_cb_close_block(gint idx, gint pos);

void sci_cb_auto_forif(gint idx, gint pos);

void sci_cb_auto_latex(gint idx, gint pos);

void sci_cb_show_macro_list(ScintillaObject *sci);

gboolean sci_cb_handle_xml(ScintillaObject *sci, gchar ch);

void sci_cb_find_current_word(ScintillaObject *sci, gint pos, gchar *word, size_t wordlen);

gboolean sci_cb_show_calltip(gint idx, gint pos);

void sci_cb_do_comment(gint idx);

void sci_cb_do_uncomment(gint idx);

void sci_cb_highlight_braces(ScintillaObject *sci, gint cur_pos);

void sci_cb_auto_multiline(ScintillaObject *sci, gint pos);

void sci_cb_auto_table(ScintillaObject *sci, gint pos);

void sci_cb_auto_close_bracket(ScintillaObject *sci, gint pos, gchar c);

#endif
