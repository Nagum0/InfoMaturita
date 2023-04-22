import { Link } from 'react-router-dom';

import '../App.css';
import { useState } from 'react';;

function Menu () {
    /* For tetelek dropdown menu */
    const [isOpen, setIsOpen] = useState(false);
    const toggleMenu = ()=> { setIsOpen(!isOpen); }

    /* For c++ projects dropdown menu */
    const [projectsOpen, setProjectsOpen] = useState(false);
    const toggleProjectsOpen = ()=> { setProjectsOpen(!projectsOpen); }

    /* About me dropdown menu */
    const [aboutMeOpen, setAboutMeOpen] = useState(false);
    const toggleAboutMe = ()=> { setAboutMeOpen(!aboutMeOpen); }

    return (
        <div className='menu_div'>
            {/* Title */}
                <h1 className='home_title'>
                    <Link to="/">
                        Home
                    </Link>
                </h1>

            {/* Tetelek dropdown menu */}
            <a href="#" className='drop_down_link' onClick={toggleMenu}>
                Tetelek
            </a>

            {isOpen && (
                <ul className='drop_down_menu_ul'>
                    <li className="drop_down_item">
                        <Link to="/list">
                            List
                        </Link>
                    </li>
                    <li className="drop_down_item">
                        <Link to='/python'>
                            Python
                        </Link>
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

            {projectsOpen && (
                <ul className="drop_down_menu_ul">
                    <li className="drop_down_item">
                        ATM Terminal App
                    </li>
                </ul>
            )}

            {/* About me */}
            <a href="#" className='drop_down_link' onClick={toggleAboutMe}>
                About me
            </a>

            {aboutMeOpen && (
                <ul className="drop_down_menu_ul">
                    <li className="drop_down_item">
                        Instagram
                    </li>
                    <li className="drop_down_item">
                        Twitter
                    </li>
                </ul>
            )}
        </div>
    );
}

export default Menu;