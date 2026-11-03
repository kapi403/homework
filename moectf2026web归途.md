# moectf2026web归途
##flag:## moectf{f5b01655-3272-e7b9-c402-65b70316247e}
## key1-N2ghNUkkTQ==
f12然后点击控制台可以找到第一个
## key2-QDBtNG9k
ctrl+u的注释可以找到第二个
## key3-M0szeUVuKw==
查看网络里面的预览可以看见key3和提示##Do you know url params? Try to get Key4##
## key4-ZXJUaDFzbGE=
网络里面的请求把id=3改成id=4在url里面改进入下一个界面获得提示##Do you know HTTP headers? Check it. Besides, Try to POST this api##
## key5-ITkzdA==
点击网络查看请求头可以看到key5=ITkzdA==
## Key6-ZnwxbGFA
### 直接在网络里右键该请求编辑并修改为post
### 使用burpsuite抓包修改方式为post
获得提示Try login!
## key7-NGFAZzY5Nmc5
登录/login，先输入这个给的密码和账号，然后找到了cookie的信息为user=guest，把它改成admin刷新后进入最后的页面
##获取的所有都是base64，需要对每一个片段进行解码，组合之后输入即可##