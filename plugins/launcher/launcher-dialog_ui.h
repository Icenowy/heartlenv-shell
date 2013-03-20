/* automatically generated from launcher-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (launcher_dialog_ui)
#endif
#ifdef __GNUC__
static const char launcher_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char launcher_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><requires lib=\"gtk+\" version=\"2.14"
  "\"/><object class=\"GtkListStore\" id=\"arrow-position-model\"><columns"
  "><column type=\"gchararray\"/></columns><data><row><col id=\"0\" transl"
  "atable=\"yes\">Default</col></row><row><col id=\"0\" translatable=\"yes"
  "\">North</col></row><row><col id=\"0\" translatable=\"yes\">West</col><"
  "/row><row><col id=\"0\" translatable=\"yes\">East</col></row><row><col "
  "id=\"0\" translatable=\"yes\">South</col></row><row><col id=\"0\" trans"
  "latable=\"yes\">Inside Button</col></row></data></object><object class="
  "\"GtkListStore\" id=\"add-store\"><columns><column type=\"GdkPixbuf\"/>"
  "<column type=\"gchararray\"/><column type=\"GObject\"/><column type=\"g"
  "chararray\"/><column type=\"gchararray\"/></columns></object><object cl"
  "ass=\"GtkListStore\" id=\"item-store\"><columns><column type=\"GdkPixbu"
  "f\"/><column type=\"gchararray\"/><column type=\"GObject\"/></columns><"
  "/object><object class=\"GtkTreeModelFilter\" id=\"add-store-filter\"><p"
  "roperty name=\"child_model\">add-store</property></object><object class"
  "=\"XfceTitledDialog\" id=\"dialog\"><property name=\"title\" translatab"
  "le=\"yes\">Launcher</property><property name=\"window_position\">center"
  "</property><property name=\"default_width\">350</property><property nam"
  "e=\"default_height\">400</property><property name=\"icon_name\">gtk-pro"
  "perties</property><property name=\"type_hint\">normal</property><proper"
  "ty name=\"has_separator\">False</property><child internal-child=\"vbox\""
  "><object class=\"GtkVBox\" id=\"dialog-vbox2\"><property name=\"visible"
  "\">True</property><property name=\"orientation\">vertical</property><pr"
  "operty name=\"spacing\">2</property><child><object class=\"GtkNotebook\""
  " id=\"notebook2\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">True</property><property name=\"border_width\">6</pro"
  "perty><child><object class=\"GtkHBox\" id=\"hbox1\"><property name=\"vi"
  "sible\">True</property><property name=\"border_width\">6</property><pro"
  "perty name=\"spacing\">6</property><child><object class=\"GtkScrolledWi"
  "ndow\" id=\"scrolledwindow2\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">True</property><property name=\"hscrollba"
  "r_policy\">automatic</property><property name=\"vscrollbar_policy\">aut"
  "omatic</property><property name=\"shadow_type\">etched-in</property><ch"
  "ild><object class=\"GtkTreeView\" id=\"item-treeview\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"model\">item-store</property><property name=\"headers_vi"
  "sible\">False</property><property name=\"rules_hint\">True</property><p"
  "roperty name=\"enable_search\">False</property><child><object class=\"G"
  "tkTreeViewColumn\" id=\"treeviewcolumn2\"><property name=\"spacing\">2<"
  "/property><child><object class=\"GtkCellRendererPixbuf\" id=\"itemrende"
  "rericon\"/><attributes><attribute name=\"pixbuf\">0</attribute></attrib"
  "utes></child><child><object class=\"GtkCellRendererText\" id=\"itemrend"
  "erername\"/><attributes><attribute name=\"markup\">1</attribute></attri"
  "butes></child></object></child></object></child></object><packing><prop"
  "erty name=\"position\">0</property></packing></child><child><object cla"
  "ss=\"GtkAlignment\" id=\"alignment1\"><property name=\"visible\">True</"
  "property><property name=\"yalign\">0</property><property name=\"xscale\""
  ">0</property><property name=\"yscale\">0</property><child><object class"
  "=\"GtkVBox\" id=\"vbox3\"><property name=\"visible\">True</property><pr"
  "operty name=\"orientation\">vertical</property><property name=\"spacing"
  "\">6</property><property name=\"homogeneous\">True</property><child><ob"
  "ject class=\"GtkButton\" id=\"item-move-up\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"receives_default\">True</property><property name=\"tooltip_text\""
  " translatable=\"yes\">Move currently selected item up by one row</prope"
  "rty><child><object class=\"GtkImage\" id=\"image2\"><property name=\"vi"
  "sible\">True</property><property name=\"stock\">gtk-go-up</property></o"
  "bject></child></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"position\">0</property></packing></child><child><ob"
  "ject class=\"GtkButton\" id=\"item-move-down\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">True</property><property"
  " name=\"receives_default\">True</property><property name=\"tooltip_text"
  "\" translatable=\"yes\">Move currently selected item down by one row</p"
  "roperty><child><object class=\"GtkImage\" id=\"image3\"><property name="
  "\"visible\">True</property><property name=\"stock\">gtk-go-down</proper"
  "ty></object></child></object><packing><property name=\"expand\">False</"
  "property><property name=\"position\">1</property></packing></child><chi"
  "ld><object class=\"GtkButton\" id=\"item-add\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">True</property><property"
  " name=\"receives_default\">True</property><property name=\"tooltip_text"
  "\" translatable=\"yes\">Add one or more existing items to the launcher<"
  "/property><child><object class=\"GtkImage\" id=\"image4\"><property nam"
  "e=\"visible\">True</property><property name=\"stock\">gtk-add</property"
  "></object></child></object><packing><property name=\"expand\">False</pr"
  "operty><property name=\"position\">2</property></packing></child><child"
  "><object class=\"GtkButton\" id=\"item-new\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"receives_default\">True</property><property name=\"tooltip_text\""
  " translatable=\"yes\">Add a new empty item</property><child><object cla"
  "ss=\"GtkImage\" id=\"image10\"><property name=\"visible\">True</propert"
  "y><property name=\"stock\">gtk-new</property></object></child></object>"
  "<packing><property name=\"position\">3</property></packing></child><chi"
  "ld><object class=\"GtkButton\" id=\"item-delete\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">True</property><prope"
  "rty name=\"receives_default\">True</property><property name=\"tooltip_t"
  "ext\" translatable=\"yes\">Delete the currently selected item</property"
  "><child><object class=\"GtkImage\" id=\"image9\"><property name=\"visib"
  "le\">True</property><property name=\"stock\">gtk-delete</property></obj"
  "ect></child></object><packing><property name=\"expand\">False</property"
  "><property name=\"position\">4</property></packing></child><child><obje"
  "ct class=\"GtkButton\" id=\"item-edit\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">True</property><property name=\""
  "receives_default\">True</property><property name=\"tooltip_text\" trans"
  "latable=\"yes\">Edit the currently selected item</property><child><obje"
  "ct class=\"GtkImage\" id=\"image1\"><property name=\"visible\">True</pr"
  "operty><property name=\"stock\">gtk-edit</property></object></child></o"
  "bject><packing><property name=\"expand\">False</property><property name"
  "=\"position\">5</property></packing></child></object></child></object><"
  "packing><property name=\"expand\">False</property><property name=\"posi"
  "tion\">1</property></packing></child></object></child><child type=\"tab"
  "\"><object class=\"GtkLabel\" id=\"label1\"><property name=\"visible\">"
  "True</property><property name=\"label\" translatable=\"yes\">General</p"
  "roperty></object><packing><property name=\"tab_fill\">False</property><"
  "/packing></child><child><object class=\"GtkVBox\" id=\"vbox1\"><propert"
  "y name=\"visible\">True</property><property name=\"border_width\">6</pr"
  "operty><property name=\"orientation\">vertical</property><property name"
  "=\"spacing\">6</property><child><object class=\"GtkCheckButton\" id=\"d"
  "isable-tooltips\"><property name=\"label\" translatable=\"yes\">Disable"
  " t_ooltips</property><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">True</property><property name=\"receives_default\""
  ">False</property><property name=\"tooltip_text\" translatable=\"yes\">S"
  "elect this option to disable the tooltips when moving over the panel bu"
  "tton or menu items.</property><property name=\"use_underline\">True</pr"
  "operty><property name=\"draw_indicator\">True</property></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"position\""
  ">0</property></packing></child><child><object class=\"GtkCheckButton\" "
  "id=\"show-label\"><property name=\"label\" translatable=\"yes\">Show _l"
  "abel instead of icon</property><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">True</property><property name=\"receives"
  "_default\">False</property><property name=\"use_underline\">True</prope"
  "rty><property name=\"draw_indicator\">True</property></object><packing>"
  "<property name=\"expand\">False</property><property name=\"position\">1"
  "</property></packing></child><child><object class=\"GtkCheckButton\" id"
  "=\"move-first\"><property name=\"label\" translatable=\"yes\">Show last"
  " _used item in panel</property><property name=\"visible\">True</propert"
  "y><property name=\"can_focus\">True</property><property name=\"receives"
  "_default\">False</property><property name=\"tooltip_text\" translatable"
  "=\"yes\">Select this option to move the clicked menu item to the panel."
  "</property><property name=\"use_underline\">True</property><property na"
  "me=\"draw_indicator\">True</property></object><packing><property name=\""
  "expand\">False</property><property name=\"position\">2</property></pack"
  "ing></child><child><object class=\"GtkHBox\" id=\"hbox2\"><property nam"
  "e=\"visible\">True</property><property name=\"spacing\">12</property><c"
  "hild><object class=\"GtkLabel\" id=\"arrow-position-label\"><property n"
  "ame=\"visible\">True</property><property name=\"label\" translatable=\""
  "yes\">_Arrow button position:</property><property name=\"use_underline\""
  ">True</property></object><packing><property name=\"expand\">False</prop"
  "erty><property name=\"position\">0</property></packing></child><child><"
  "object class=\"GtkComboBox\" id=\"arrow-position\"><property name=\"vis"
  "ible\">True</property><property name=\"model\">arrow-position-model</pr"
  "operty><child><object class=\"GtkCellRendererText\" id=\"cellrendererte"
  "xt1\"/><attributes><attribute name=\"text\">0</attribute></attributes><"
  "/child></object><packing><property name=\"expand\">False</property><pro"
  "perty name=\"position\">1</property></packing></child></object><packing"
  "><property name=\"expand\">False</property><property name=\"position\">"
  "3</property></packing></child></object><packing><property name=\"positi"
  "on\">1</property></packing></child><child type=\"tab\"><object class=\""
  "GtkLabel\" id=\"label5\"><property name=\"visible\">True</property><pro"
  "perty name=\"label\" translatable=\"yes\">Advanced</property></object><"
  "packing><property name=\"position\">1</property><property name=\"tab_fi"
  "ll\">False</property></packing></child></object><packing><property name"
  "=\"position\">1</property></packing></child><child internal-child=\"act"
  "ion_area\"><object class=\"GtkHButtonBox\" id=\"dialog-action_area2\"><"
  "property name=\"visible\">True</property><property name=\"layout_style\""
  ">end</property><child><object class=\"GtkButton\" id=\"help-button\"><p"
  "roperty name=\"label\">gtk-help</property><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">True</property><property name"
  "=\"receives_default\">True</property><property name=\"use_stock\">True<"
  "/property></object><packing><property name=\"expand\">False</property><"
  "property name=\"fill\">False</property><property name=\"position\">0</p"
  "roperty><property name=\"secondary\">True</property></packing></child><"
  "child><object class=\"GtkButton\" id=\"button2\"><property name=\"label"
  "\">gtk-close</property><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">True</property><property name=\"receives_default"
  "\">True</property><property name=\"use_stock\">True</property></object>"
  "<packing><property name=\"expand\">False</property><property name=\"fil"
  "l\">False</property><property name=\"position\">1</property></packing><"
  "/child></object><packing><property name=\"expand\">False</property><pro"
  "perty name=\"pack_type\">end</property><property name=\"position\">0</p"
  "roperty></packing></child></object></child><action-widgets><action-widg"
  "et response=\"1\">help-button</action-widget><action-widget response=\""
  "0\">button2</action-widget></action-widgets></object><object class=\"Xf"
  "ceTitledDialog\" id=\"dialog-add\"><property name=\"title\" translatabl"
  "e=\"yes\">Add New Item</property><property name=\"window_position\">cen"
  "ter-on-parent</property><property name=\"default_width\">400</property>"
  "<property name=\"default_height\">400</property><property name=\"destro"
  "y_with_parent\">True</property><property name=\"icon_name\">gtk-add</pr"
  "operty><property name=\"type_hint\">normal</property><property name=\"h"
  "as_separator\">False</property><property name=\"subtitle\" translatable"
  "=\"yes\">Add one or more existing items to the launcher</property><chil"
  "d internal-child=\"vbox\"><object class=\"GtkVBox\" id=\"dialog-vbox4\""
  "><property name=\"visible\">True</property><property name=\"orientation"
  "\">vertical</property><property name=\"spacing\">2</property><child><ob"
  "ject class=\"GtkVBox\" id=\"vbox2\"><property name=\"visible\">True</pr"
  "operty><property name=\"border_width\">6</property><property name=\"ori"
  "entation\">vertical</property><property name=\"spacing\">6</property><c"
  "hild><object class=\"GtkHBox\" id=\"hbox4\"><property name=\"visible\">"
  "True</property><property name=\"spacing\">6</property><child><object cl"
  "ass=\"GtkLabel\" id=\"label4\"><property name=\"visible\">True</propert"
  "y><property name=\"xalign\">1</property><property name=\"label\" transl"
  "atable=\"yes\">_Search:</property><property name=\"use_underline\">True"
  "</property></object><packing><property name=\"position\">0</property></"
  "packing></child><child><object class=\"GtkEntry\" id=\"add-search\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Tru"
  "e</property></object><packing><property name=\"expand\">False</property"
  "><property name=\"position\">1</property></packing></child></object><pa"
  "cking><property name=\"expand\">False</property><property name=\"positi"
  "on\">0</property></packing></child><child><object class=\"GtkScrolledWi"
  "ndow\" id=\"scrolledwindow1\"><property name=\"visible\">True</property"
  "><property name=\"can_focus\">True</property><property name=\"hscrollba"
  "r_policy\">automatic</property><property name=\"vscrollbar_policy\">aut"
  "omatic</property><property name=\"shadow_type\">etched-in</property><ch"
  "ild><object class=\"GtkTreeView\" id=\"add-treeview\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"model\">add-store-filter</property><property name=\"head"
  "ers_visible\">False</property><property name=\"rules_hint\">True</prope"
  "rty><property name=\"enable_search\">False</property><property name=\"t"
  "ooltip_column\">4</property><child><object class=\"GtkTreeViewColumn\" "
  "id=\"treeviewcolumn1\"><property name=\"spacing\">2</property><child><o"
  "bject class=\"GtkCellRendererPixbuf\" id=\"addrenderericon\"/><attribut"
  "es><attribute name=\"pixbuf\">0</attribute></attributes></child><child>"
  "<object class=\"GtkCellRendererText\" id=\"addrenderername\"/><attribut"
  "es><attribute name=\"markup\">1</attribute></attributes></child></objec"
  "t></child></object></child></object><packing><property name=\"position\""
  ">1</property></packing></child></object><packing><property name=\"posit"
  "ion\">1</property></packing></child><child internal-child=\"action_area"
  "\"><object class=\"GtkHButtonBox\" id=\"dialog-action_area4\"><property"
  " name=\"visible\">True</property><property name=\"layout_style\">end</p"
  "roperty><child><object class=\"GtkButton\" id=\"button-add\"><property "
  "name=\"label\">gtk-add</property><property name=\"visible\">True</prope"
  "rty><property name=\"sensitive\">False</property><property name=\"can_f"
  "ocus\">True</property><property name=\"receives_default\">True</propert"
  "y><property name=\"use_stock\">True</property></object><packing><proper"
  "ty name=\"expand\">False</property><property name=\"fill\">False</prope"
  "rty><property name=\"position\">0</property></packing></child><child><o"
  "bject class=\"GtkButton\" id=\"button5\"><property name=\"label\">gtk-c"
  "lose</property><property name=\"visible\">True</property><property name"
  "=\"can_focus\">True</property><property name=\"receives_default\">True<"
  "/property><property name=\"use_stock\">True</property></object><packing"
  "><property name=\"expand\">False</property><property name=\"fill\">Fals"
  "e</property><property name=\"position\">1</property></packing></child><"
  "/object><packing><property name=\"expand\">False</property><property na"
  "me=\"pack_type\">end</property><property name=\"position\">0</property>"
  "</packing></child></object></child><action-widgets><action-widget respo"
  "nse=\"1\">button-add</action-widget><action-widget response=\"0\">butto"
  "n5</action-widget></action-widgets></object></interface>"
};

static const unsigned launcher_dialog_ui_length = 15967u;

