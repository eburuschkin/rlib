/*
 *  Copyright (C) 2003 SICOM Systems, INC.
 *
 *  Authors: Bob Doan <bdoan@sicompos.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */
 
#include <php.h>


void *rmalloc(size_t size) {
	static int count=0;
	count++;
	return emalloc(size); 
}

char *rstrdup(const char *s) {
	return estrdup(s);
}

void *rcalloc(size_t nmemb, size_t size) {
	return ecalloc(nmemb, size);
}

void rfree(void *ptr) {
	efree(ptr);
}

void *rrealloc(void *ptr, size_t size) {
	return erealloc(ptr, size);
}
