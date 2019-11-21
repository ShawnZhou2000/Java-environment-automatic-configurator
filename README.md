# Java environment automatic configurator
这是一个用来自动配置Java环境变量的懒人程序

#
脑洞来自于菜鸟教程上JSP开发环境搭建的教程，[传送门在此](https://www.runoob.com/jsp/jsp-setup.html)。这个教程上使用了windows系统下cmd的set命令进行环境变量的配置，我跟着做了一下发现确实有效，后来想到是不是可以通过程序完成这件事情，只需要输入JDK的安装目录，它就可以自动完成配置工作。

但我后来发现，set命令只对当前cmd窗口有效，如果想要实现永久修改，需要使用setx命令。经过这样一个简单的思路确定就把初版的代码敲了出来。

<del>由于第一次写的代码出现了一些bug还把我电脑的Path路径给搞炸了，还好多亏冻聪大佬出手相救才把Path差不多救了回来，不然下午我就要重装系统而不是在这水github写博客了</del>

