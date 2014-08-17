from behave import step
from dogtail.tree import *
from dogtail.rawinput import *
from dogtail.utils import *
from behave_common_steps import *

#def get_toolbar(context):
#    frame = context.app.instance.child(roleName='frame')
#    filler = frame.child(roleName='filler')
#    toolbar = filler.child(roleName='tool bar')

@step(u'Open the New file Dialog')
def open_new_file_dia(context):
    frame = context.app.instance.child(roleName='frame')
    filler = frame.child(roleName='filler')
    toolbar = filler.child(roleName='tool bar')
    open_button = toolbar[7][0]
    assert open_button.click(),"Open Dialogue is not clickable"
        

@step(u'Open Document Viewer Settings')
def open_settings(context):
    frame = context.app.instance.child(roleName='frame')
    filler = frame.child(roleName='filler')
    toolbar = filler.child(roleName='tool bar')
    setting_button = toolbar[6][0]
    assert setting_button.click(), "Settings button is not clickable"

@step('Open About Document Viewer')
def open_doc_view(context):
    frame = context.app.instance.child(roleName='frame')
    filler = frame.child(roleName='filler')
    toolbar = filler.child(roleName='tool bar')
    open_button = toolbar[7][0]   
    open_button.click()
    open_button.pressKey('enter')
