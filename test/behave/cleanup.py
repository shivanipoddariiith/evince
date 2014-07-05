#!/bin/env python
# This cleans existing gnome-weather data

import os
from gi.repository import Gio

# Reset GSettings
for schema in ['org.gnome.Evince', 'org.gnome.Evince.Application']:
    os.system("gsettings reset-recursively %s" % schema)
