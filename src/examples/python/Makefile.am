## bin/Makefile.am for RLIB

## Copyright (c) 2003-2006 SICOM Systems Inc (bdoan@sicompos.com)
## rlib is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2, or (at your option)
## any later version.

## rlib is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.

## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
## 02111-1307, USA.

## Report bugs to rlib-devel@lists.sourceforge.net
##
## Process this file with automake to produce Makefile.in

EXTRA_DIST = arrays_signals_and_functions.py compat-example.py example.py fixed_part.py follower.py graph.py xml.py

noinst_SCRIPTS = products.xml array.xml data.xml fixed_part.xml follower.xml graph.xml

products.xml:
	cp ../common/products.xml .

array.xml:
	cp ../php/array.xml .

data.xml:
	cp ../php/data.xml .

fixed_part.xml:
	cp ../php/fixed_part.xml .

follower.xml:
	cp ../php/follower.xml .

graph.xml:
	cp ../php/graph.xml .

CLEANFILES = *.xml *.pdf
