# 工程模板

> 这是一个STM32F4xx工程模版

## 使用教程

### 一、获取

使用mq工具：`mq create MQjehovah/stm32f4xx_template -o .`

使用git：`git clone git@github.com:MQjehovah/stm32f4xx_template.git`

[直接下载](https://codeload.github.com/MQjehovah/stm32f4xx_template/zip/master)


### 二、配置环境

1. 配置工程参数

打开[build/mqmake/project.json](build/mqmake/project.json),修改工程配置相关参数，包括交叉编译链路径，参数，工程文件等信息

如果使用VSCode作为开发环境，可以复制`doc/vscode_config/*`到.vscode目录配置vscode相关参数


### 三、编译

编译需要使用[mqmake](https://gitee.com/MQjehovah/mqmake)工具

`mqmake -f build/mqmake/project.json`

