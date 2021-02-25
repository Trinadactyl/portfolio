




    const img = document.createElement('img');
    img.setAttribute('src', proj.imgsrc)
    img.style.width = '50%';

    const info = document.createElement('div');
    info.classList.add('info-div');
    info.style.width = '50%';
    info.style.display = 'flex';
    info.style.flexDirection = 'column';
    info.style.alignItems = 'center';
    info.style.alignSelf = 'center';

    //let name = document.createElement('h2')
    //name.innerHTML = proj.name;

    let desc = document.createElement('p');
    desc.innerHTML = proj.desc;

    let btns = document.createElement('div');
    btns.classList.add('proj-btns');
    btns.style.width = '60%';
    btns.style.height = '20%';

    let live = document.createElement('a');
    live.innerHTML = 'Live';
    live.setAttribute('href', proj.live);
    live.setAttribute('target', '_blank');
    live.style.margin = '5px';
    live.style.padding = '10px';
    live.style.width = '50%';
    live.style.height = '100%';
    live.style.backgroundColor = '#FABC2A';

    let code = document.createElement('a');
    code.innerHTML = 'Code';
    code.setAttribute('href', proj.code); 
    code.setAttribute('target', '_blank');
    code.style.margin = '5px';
    code.style.padding = '10px';
    code.style.width = '50%';
    code.style.backgroundColor = '#FABC2A';

    btns.appendChild(live);
    btns.appendChild(code)

    info.appendChild(name);
    info.appendChild(desc);
    info.appendChild(btns);


    box.appendChild(img);
    box.appendChild(info)
    projContainer.appendChild(box);
  })
}

displayProjects();

