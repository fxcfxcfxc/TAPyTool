import os
import sys
rootpath = os.path.abspath(__file__)
rootpath2 = os.path.dirname(rootpath)
sys.path.append(rootpath2)
print(rootpath2)
import unreal


# 获取当前的菜单实例对象
menus = unreal.ToolMenus.get()
main_menu = menus.find_menu("LevelEditor.MainMenu")


# 创建子菜单
entry = unreal.ToolMenuEntry(
    name="python.Tools",
    type=unreal.MultiBlockType.MENU_ENTRY,
    insert_position=unreal.ToolMenuInsert("",unreal.ToolMenuInsertType.FIRST)
)

entry1 = unreal.ToolMenuEntry(
    name="python.CloseTonemapperFilm",
    type=unreal.MultiBlockType.MENU_ENTRY,
    insert_position=unreal.ToolMenuInsert("",unreal.ToolMenuInsertType.DEFAULT)
)



# 设置子菜单 链接命令
entry.set_label("ToolKit")
entry.set_string_command(unreal.ToolMenuStringCommandType.COMMAND, "Name","py \"/Src/ToolKit.py\"")
entry1.set_label("CloseTonemapperFime")
entry1.set_string_command(unreal.ToolMenuStringCommandType.COMMAND, "Name1","r.TonemapperFilm 0")

# 添加主菜单
script_menu = main_menu.add_sub_menu(main_menu.get_name(), "TAPyTools", "TAPyTools", "TAPyTools")
# 将子菜单添加到主菜单上
script_menu.add_menu_entry("Scripts", entry)
script_menu.add_menu_entry("Scripts", entry1)

# 刷新ui
menus.refresh_all_widgets()


