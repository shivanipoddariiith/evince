#!/bin/env python
# This cleans existing gnome-weather data

import os
from gi.repository import Gio

# Reset GSettings
for schema in ['org.gnome.Evince']:
    os.system("gsettings reset-recursively %s" % schema)
