
# 🚀 Bitcoin-Powered NetAcad-Style Learning Platform (Full Stack with Symfony + Tailwind)

## 🎯 GOAL
Create a professional online education platform with:
- 📚 Course management
- 👩‍🏫 Instructor self-service uploads
- 🧑‍🎓 Student dashboards
- ⚡ Bitcoin Lightning payments (sats)
- 💼 Role-based access control (Admin, Instructor, Student)

---

## 📁 DIRECTORY STRUCTURE (Symfony Standard)
```
├── templates/            # Twig-based HTML views
├── src/Controller/       # Symfony controllers (routing logic)
├── public/               # Compiled Tailwind assets, JS, logos
├── assets/               # Tailwind, Stimulus, JS modules
├── config/               # Symfony configs
├── routes/               # Route definitions
├── fixtures/             # Dummy data with Faker (optional)
```

---

## 🎨 DESIGN STYLE (Inspired by NetAcad.com)
- Modern, clean, corporate tech look
- **Color scheme**:
  - Primary: `#005073` (dark cyan-blue)
  - Accent: `#107dac` (light teal)
  - Light: `#f5f5f5`
  - Text: `#1a1a1a`
- Typography: `font-sans`, preferably Inter or Open Sans
- Icons from [Lucide](https://lucide.dev/) or Bootstrap Icons
- Responsive navbar with hover menus for Students and Instructors

---

## 🧱 CORE PAGES (with Dummy Content)

### 1. 🏠 Home (`/`)
- Hero banner: “Start Learning with Bitcoin” CTA
- “Why Learn with Us” section: 3 cards
- Featured courses slider
- Testimonials
- Footer with links: About, Help, Donate BTC

### 2. 📚 Course Catalog (`/courses`)
- Filters: Category, Level, Free/Paid
- Course Cards: title, price (in sats), rating, thumbnail
- Sort options: Newest, Popular
- Search bar
- “View Course” button

### 3. 📄 Course Detail (`/course/{slug}`)
- Header: Title, Category, Author, Price in sats
- Tabs/Sections: Description, Modules, Reviews, Certificate preview
- CTA: “Enroll with Sats” → dummy QR code (Lightning)
- Dummy course includes: 5 modules, embedded video, “Mark Complete”

### 4. 👩‍🏫 Instructor Dashboard (`/instructor`)
- Sidebar: My Courses, Add Course, Revenue, Students
- “Add Course” form with file upload placeholders
- Quiz builder (dummy)
- “My Courses” list with edit/publish buttons
- Dummy graph for earnings

### 5. 👨‍🎓 Student Dashboard (`/student`)
- Tabs: My Learning, My Certificates, Rewards, Forum
- Progress bars for enrolled courses
- “Earn sats” reward section
- QR Code referral generator (placeholder)
- Downloadable dummy certificate

### 6. 🧑‍💼 Admin Panel (`/admin`)
- Manage users and roles
- Approve instructors
- Review reported content
- Configure fees, BTC wallet
- View donation and withdrawal logs

### 7. 🎁 Required Bonus Features (Core)
- Learning Paths: “Bitcoin Essentials Track”
- Badges: “Completed 5 courses” etc.
- Community Tab: Discord/forum link
- Donation Pool: Donate unused sats to causes
- Certificate generator: dummy PDF download

### 8. 👤 Authentication & Role Access
- Login/Register (modal style)
- Register as Student or Instructor
- Symfony Security role guards:
  - `/admin` → ROLE_ADMIN
  - `/instructor` → ROLE_INSTRUCTOR
  - `/student` → ROLE_STUDENT
- Passwords hashed with bcrypt

### 9. 🧪 Dummy Data for Testing
- 3 instructors (names, bios)
- 5 courses (category, price, modules)
- 10 students (varied enrollment)
- 2 learning paths
- Ratings and reviews
- Placeholder Bitcoin QR codes

---

## 💻 Frontend Tech Stack
- **Tailwind CSS** via Webpack Encore
- `main.js` for base interactivity (nav toggle, modals, tabs)
- StimulusJS for modular controllers:
  - `menu_controller.js`
  - `course_controller.js`
  - `instructor_controller.js`
- Semantic HTML with clean utility-first classes

---

## ✅ Output Requirements

Generate the following:
- `base.html.twig` (layout file)
- Pages:
  - `home.html.twig`
  - `catalog.html.twig`
  - `course_detail.html.twig`
  - `instructor_dashboard.html.twig`
  - `student_dashboard.html.twig`
  - `admin_panel.html.twig`
- Tailwind CSS build or `tailwind.css`
- `main.js` for basic interactions
- Dummy assets: course thumbnails, avatars
- Optional Faker-powered seeds in `fixtures/`

---

## ⚡ End Goal
Build a Bitcoin-first learning platform that:
- Feels like NetAcad (but simpler)
- Enables course uploads and learning with sats
- Runs smoothly with Symfony + Tailwind + Twig
- Encourages self-paced education + Web3 principles
