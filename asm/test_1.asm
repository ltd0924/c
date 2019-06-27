.model tiny
.code
.startup
    mov     dx,offset string
    mov    ah,9
    int       21h
.exit 0
string db  'Name:   LuoTingdan',13,10,'Number: 201687014',13,10,'Phone:  15542389296',13,10,'Email:  ltd0924@sina.com',13,10,'$'
end
