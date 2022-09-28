import os
import sys
rootpath = os.path.abspath(__file__)
rootpath2 = os.path.dirname(rootpath)
sys.path.append(rootpath2)

import unreal
import json
from collections import OrderedDict
# 存放按钮命令类型
type_map={
    "command":unreal.ToolMenuStringCommandType.COMMAND,
    "python":unreal.ToolMenuStringCommandType.PYTHON
}


# 读取menu 菜单json文件
def read_menu_json(path):
    with open(path, 'r',encoding = 'utf -8') as f:
        data = json.load(f, object_pairs_hook=OrderedDict)

    # 获取section 分组栏 字典
    menu_section_dict = data['section']
    # 获取子菜单 字典
    menu_entry_dict = data['menu']

    for menu, data in menu_entry_dict.items():
        data['type'] = type_map[data['type'].lower()]
        # data['command'] = data['command'].format()

    return menu_section_dict,menu_entry_dict



def create_menu():
    pass
    menu_section_dict, menu_entry_dict = read_menu_json(rootpath2+"\\"+"Menu.json")

    menus = unreal.ToolMenus.get()

    main_menu = menus.find_menu("LevelEditor.MainMenu")
    if not main_menu:
        raise RuntimeError("Failed to find the'main' menu. " )

    #添加主菜单
    script_menu = main_menu.add_sub_menu(main_menu.get_name(),"TAPyTools","TAPyTools","TAPyTools")

    # 添加分组
    for section, label in menu_section_dict.items():
        script_menu.add_section(section,label)

    print(menu_entry_dict.items())
    # 配置选项按钮
    for menu, data in menu_entry_dict.items():
        # 配置一个entry
        entry = unreal.ToolMenuEntry(
            name = menu,
            type = unreal.MultiBlockType.MENU_ENTRY,
            insert_position = unreal.ToolMenuInsert("",unreal.ToolMenuInsertType.FIRST)
        )
        # 设置显示标题
        entry.set_label(data.get('label',"untitle"))
        command = data.get('command','')
        # 设置绑定命令
        entry.set_string_command(data.get("type",0), "", string = command)

        # 添加到对应的分组栏目中
        script_menu.add_menu_entry(data.get('section',''), entry)
    menus.refresh_all_widgets()


create_menu()


