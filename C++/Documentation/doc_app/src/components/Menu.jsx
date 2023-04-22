import '../App.css';
import { useState } from 'react';

function Menu () {
    /* For tetelek dropdown menu */
    const [isOpen, setIsOpen] = useState(false);
    const toggleMenu = ()=> { setIsOpen(!isOpen); }

    /* For c++ projects dropdown menu */
    const [projectsOpen, setProjectsOpen] = useState(false);
    const toggleProjectsOpen = ()=> { setProjectsOpen(!projectsOpen); }

    return (
        <div className='menu_div'>
            {/* Title */}
            <h1 className='menu_title'>
                Menu
            </h1>

            {/* Tetelek dropdown menu */}
            <a href="#" className='drop_down_link' onClick={toggleMenu}>
                Tetelek
            </a>
            {isOpen && (
                <ul className='drop_down_menu_ul'>
                    <li className="drop_down_item">
                        List
                    </li>
                    <li className="drop_down_item">
                        Python
                    </li>
                    <li className="drop_down_item">
                        C++
                    </li>
                </ul>
            )}

            {/* C++ projects */}
            <a href="#" className='drop_down_link' onClick={toggleProjectsOpen}>
                C++ Projects
            </a>
        </div>
    );
}

export default Menu;