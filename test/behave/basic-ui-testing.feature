Feature: Basic UI Actions

  @test_file_open
  Scenario: Start Evince via command
    * Open the New file Dialog
    * Close the Dialog
    Then No file should be open

  @test_toolbar_editor
  Scenario: Start Evince via command
    * Open the Toolbar editor dialog
    * Close the Dialog
#    Then 

  @test_about_dialog_open
  Scenario: Start Evince via command
    * Open About Document Viewer
    * Open Credits
    Then Credits should show

  @test_about_dialog_close
  Scenario: Open About Document Viewer
    * Open Credits
    * Close credits
    * Close About document viewer
    Then About should not show
